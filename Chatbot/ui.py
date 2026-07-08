import streamlit as st
from langgraph_database_backend import chatbot, retrieve_all_threads
from langchain_core.messages import HumanMessage
import uuid

# ================= PAGE CONFIG =================
st.set_page_config(
    page_title="LangGraph AI",
    page_icon="🤖",
    layout="wide"
)

# ================= CUSTOM CSS =================
st.markdown("""
<style>

.main {
    background-color: #0E1117;
}

.chat-title {
    text-align:center;
    font-size:38px;
    font-weight:bold;
    background: linear-gradient(90deg,#4F46E5,#06B6D4);
    -webkit-background-clip:text;
    -webkit-text-fill-color:transparent;
    margin-bottom:20px;
}

.user-msg {
    background:#2563EB;
    padding:12px;
    border-radius:15px;
    color:white;
    margin:8px 0;
}

.assistant-msg {
    background:#1F2937;
    padding:12px;
    border-radius:15px;
    color:white;
    margin:8px 0;
}

.sidebar .sidebar-content {
    background-color:#111827;
}

.stButton>button {
    width:100%;
    border-radius:10px;
}

</style>
""", unsafe_allow_html=True)

# ================= FUNCTIONS =================

def generate_thread_id():
    return str(uuid.uuid4())

def add_thread(thread_id):
    if thread_id not in st.session_state["chat_threads"]:
        st.session_state["chat_threads"].append(thread_id)

def reset_chat():
    new_thread = generate_thread_id()
    st.session_state["thread_id"] = new_thread
    add_thread(new_thread)
    st.session_state["message_history"] = []

def load_conversation(thread_id):
    state = chatbot.get_state(
        config={"configurable": {"thread_id": thread_id}}
    )
    return state.values.get("messages", [])


# ================= SESSION =================

if "message_history" not in st.session_state:
    st.session_state["message_history"] = []

if "thread_id" not in st.session_state:
    st.session_state["thread_id"] = generate_thread_id()

if "chat_threads" not in st.session_state:
    st.session_state["chat_threads"] = retrieve_all_threads()

add_thread(st.session_state["thread_id"])


# ================= SIDEBAR =================

with st.sidebar:

    st.title("🤖 LangGraph AI")

    if st.button("➕ New Chat"):
        reset_chat()
        st.rerun()

    st.divider()

    st.subheader("📜 Chat History")

    for thread_id in st.session_state["chat_threads"][::-1]:

        short_id = str(thread_id)[:12]

        if st.button(
            f"💬 {short_id}",
            key=f"thread_{thread_id}"
        ):
            st.session_state["thread_id"] = thread_id

            messages = load_conversation(thread_id)

            temp_messages = []

            for msg in messages:

                role = (
                    "user"
                    if isinstance(msg, HumanMessage)
                    else "assistant"
                )

                temp_messages.append({
                    "role": role,
                    "content": msg.content
                })

            st.session_state["message_history"] = temp_messages
            st.rerun()


# ================= HEADER =================

st.markdown(
    "<div class='chat-title'>🚀 LangGraph AI Assistant</div>",
    unsafe_allow_html=True
)

# ================= CHAT HISTORY =================

for message in st.session_state["message_history"]:

    avatar = "🧑" if message["role"] == "user" else "🤖"

    with st.chat_message(
        message["role"],
        avatar=avatar
    ):
        st.markdown(message["content"])


# ================= USER INPUT =================

user_input = st.chat_input("Ask me anything...")

if user_input:

    # User Message
    st.session_state["message_history"].append({
        "role": "user",
        "content": user_input
    })

    with st.chat_message("user", avatar="🧑"):
        st.markdown(user_input)

    CONFIG = {
        "configurable": {
            "thread_id": st.session_state["thread_id"]
        },
        "metadata": {
            "thread_id": st.session_state["thread_id"]
        },
        "run_name": "chat_turn"
    }

    # Assistant Response
    with st.chat_message("assistant", avatar="🤖"):

        response = st.write_stream(
            message_chunk.content
            for message_chunk, metadata in chatbot.stream(
                {
                    "messages": [
                        HumanMessage(content=user_input)
                    ]
                },
                config=CONFIG,
                stream_mode="messages"
            )
        )

    st.session_state["message_history"].append({
        "role": "assistant",
        "content": response
    })