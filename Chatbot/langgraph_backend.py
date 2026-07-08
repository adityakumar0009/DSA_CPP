from langgraph.graph import StateGraph, START, END
from typing import TypedDict, Annotated
from langchain_core.messages import BaseMessage, HumanMessage
from langgraph.checkpoint.memory import InMemorySaver
from langchain_groq import ChatGroq
import os
from dotenv import load_dotenv

from langgraph.graph.message import add_messages
class ChatState(TypedDict):
    messages: Annotated[list[BaseMessage], add_messages]

load_dotenv()

print("API KEY:", os.getenv("GROQ_API_KEY"))
    
#llm = ChatOpenAI()
llm = ChatGroq(
    model="llama-3.3-70b-versatile"
)
def chat_node(state: ChatState):
    # take user query from state
    messages = state['messages']
    # send to llm
    response = llm.invoke(messages)
    # response store state
    return {'messages': [response]}

# Checkpointer
checkpointer = InMemorySaver()

graph = StateGraph(ChatState)
graph.add_node('chat_node', chat_node)
graph.add_edge(START, 'chat_node')
graph.add_edge('chat_node', END)
#chatbot = graph.compile()
chatbot = graph.compile(checkpointer=checkpointer)

print(chatbot)    
