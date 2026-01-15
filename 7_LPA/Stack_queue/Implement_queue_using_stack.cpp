#include<iostream>
#include<stack>
using namespace std;
class Myqueue{
    public:
    stack<int> s1;
    stack<int> s2;
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
    Myqueue q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.peek() << endl;                            // Output: 10
    cout << q.pop() << endl;                             // Output: 10
    cout << q.peek() << endl;                            // Output: 20
    cout << (q.empty() ? "Empty" : "Not Empty") << endl; // Not Empty
    return 0;
}