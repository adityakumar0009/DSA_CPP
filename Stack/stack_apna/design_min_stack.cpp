#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    stack<pair<int,int>> s;
    void push(int val){
        if(s.empty()){
            s.push({val,val});
        }
        else{
            int minVal = min(val,s.top().second);
            s.push({val,minVal});
        }
    }
    void pop(){
        s.pop();
    }
    int top(){
        return s.top().first;
    }
    int getmin(){
        return s.top().second;
    }
};
int main(){
    Stack st;
    st.push(-2);
    st.push(0);
    st.push(-3);
    cout<<"minimum: "<<st.getmin()<<endl;
    st.pop();
    cout<<"minimum: "<<st.getmin();
    return 0;
}