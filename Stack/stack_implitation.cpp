#include<iostream>
using namespace std;

class stack {
    // Properties
    public:
    int *arr;
    int topIndex;
    int size;

    // Behavior
    stack(int size) {
        this->size = size;
        arr = new int[size];
        topIndex = -1;
    }

    void push(int element) {
        if(size - topIndex > 1) {
            topIndex++;
            arr[topIndex] = element;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    void pop() {
        if(topIndex >= 0) {
            topIndex--;
        } else {
            cout << "Stack underflow" << endl;
        }
    }

    int top() {
        if(topIndex >= 0) {
            return arr[topIndex];
        } else {
            cout << "Stack is empty" << endl;
            return -1; 
        }
    }

    bool isempty() {
        // return topIndex == -1;
        if(topIndex==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main() {
    stack st(5);
    st.push(22);
    st.push(23);
    st.push(43);
    cout << "At peak " << st.top() << endl;
    st.pop();
    cout << "At peak " << st.top() << endl;
    st.pop();
    cout << "At peak " << st.top() << endl;
    st.pop();
    cout << "At peak " << st.top() << endl;
    if(st.isempty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stock is not empty"<<endl;
    }
}
