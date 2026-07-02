import re
import json
import streamlit as st
from langchain_community.document_loaders import (
    PyPDFLoader,
    Docx2txtLoader,
    TextLoader
)

# =========================
# TECH SKILLS DATABASE
# =========================

TECH_SKILLS = [
    "python",
    "java",
    "c++",
    "javascript",
    "typescript",
    "react",
    "nextjs",
    "nodejs",
    "express",
    "mongodb",
    "mysql",
    "postgresql",
    "fastapi",
    "flask",
    "django",
    "tensorflow",
    "pytorch",
    "langchain",
    "docker",
    "kubernetes",
    "redis",
    "git",
    "github",
    "aws"
]

# =========================
# LOAD RESUME
# =========================

def load_resume_docs(uploaded_file):

    temp_path = f"temp_{uploaded_file.name}"

    with open(temp_path, "wb") as f:
        f.write(uploaded_file.getbuffer())

    if uploaded_file.name.endswith(".pdf"):
        loader = PyPDFLoader(temp_path)

    elif uploaded_file.name.endswith(".docx"):
        loader = Docx2txtLoader(temp_path)

    elif uploaded_file.name.endswith(".txt"):
        loader = TextLoader(temp_path)

    else:
        return None

    return loader.load()

# =========================
# REGEX EXTRACTION
# =========================

def extract_email(text):

    emails = re.findall(
        r"[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,}",
        text
    )

    return emails[0] if emails else "No idea"

def extract_phone(text):

    phones = re.findall(
        r"\+?\d[\d -]{8,12}\d",
        text
    )

    return phones[0] if phones else "No idea"

def extract_linkedin(text):

    linkedin = re.findall(
        r"linkedin\.com/in/[A-Za-z0-9_-]+",
        text
    )

    return linkedin[0] if linkedin else "No idea"

def extract_name(text):

    lines = text.split("\n")

    for line in lines[:10]:

        line = line.strip()

        if len(line.split()) <= 4 and line.isupper() == False:
            return line

    return "No idea"

def extract_skills(text):

    found_skills = []

    text = text.lower()

    for skill in TECH_SKILLS:

        if skill.lower() in text:
            found_skills.append(skill)

    return list(set(found_skills))

# =========================
# SECTION EXTRACTION
# =========================

def extract_section(text, section_name):

    pattern = rf"{section_name}(.*?)(Education|Experience|Projects|Skills|Certifications|Languages|$)"

    match = re.search(
        pattern,
        text,
        re.IGNORECASE | re.DOTALL
    )

    if match:
        content = match.group(1).strip()

        lines = [
            line.strip()
            for line in content.split("\n")
            if line.strip()
        ]

        return lines

    return []

# =========================
# MAIN PARSER
# =========================

def parse_resume(text):

    data = {
        "Name": extract_name(text),
        "Email": extract_email(text),
        "Phone": extract_phone(text),
        "LinkedIn": extract_linkedin(text),
        "Skills": extract_skills(text),
        "Education": extract_section(text, "Education"),
        "Experience": extract_section(text, "Experience"),
        "Projects": extract_section(text, "Projects"),
        "Certifications": extract_section(text, "Certifications"),
        "Languages": extract_section(text, "Languages")
    }

    return data

# =========================
# STREAMLIT UI
# =========================

def main():

    st.set_page_config(
        page_title="Resume Parser",
        page_icon="📄",
        layout="centered"
    )

    st.title("AI Resume Parser (No API)")

    uploaded_file = st.file_uploader(
        "Upload Resume",
        type=["pdf", "docx", "txt"]
    )

    if uploaded_file:

        with st.spinner("Loading Resume..."):

            docs = load_resume_docs(uploaded_file)

            if not docs:
                st.error("Unsupported file type.")
                return

        full_text = "\n\n".join(
            [doc.page_content for doc in docs]
        )

        st.subheader("Extracted Text Preview")

        st.text_area(
            "Preview",
            value=full_text[:3000],
            height=200
        )

        if st.button("Parse Resume"):

            parsed_data = parse_resume(full_text)

            st.subheader("Parsed Resume JSON")

            st.json(parsed_data)

# =========================
# RUN APP
# =========================

if __name__ == "__main__":
    main()