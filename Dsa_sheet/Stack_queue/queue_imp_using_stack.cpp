#include<iostream>
#include<stack>
using namespace std;
class myqueue{
    public:
    stack<int> s1;
    stack<int> s2;
    myqueue(){

    }
    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int pop(){
        int ans = s1.top();
        s1.pop();
        return ans;
    }
    int peek(){
        return s1.top();
    }
    bool empty(){
        return s1.empty();
    }
};
int main(){
    myqueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Top element: " << q.peek() << endl;
    cout << "Popped: " << q.pop() << endl;
    cout << "Stack empty? " << (q.empty() ? "Yes" : "No") << endl;
    return 0;
}