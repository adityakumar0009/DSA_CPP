#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"array is not empty"<<endl;
            return -1;
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);
    cout<<"peak element->"<<st.peek()<<endl;
    st.pop();
    cout<<"peak element->"<<st.peek()<<endl;
    st.pop();
    cout<<"peak element->"<<st.peek()<<endl;
    st.pop();
    cout<<"peak element->"<<st.peek()<<endl;
    if(st.isempty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    // stack<int> s;
    // s.push(2);
    // s.push(3);
    // s.pop();
    // cout<<"the top element is->"<<s.top()<<endl;
    // if(s.empty()){
    //     cout<<"the elment is empty"<<endl;
    // }
    // else{
    //     cout<<"the element is not element"<<endl;
    // }
    // cout<<"the size of stack is->"<<s.size();
}