#include<iostream>
#include<stack>
using namespace std;
class Myqueue{
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int x){
        while(s1.size()>0){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size()>0){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int pop(){
        int ans = s1.top();
        s1.pop();
        return ans;
    }
    int top(){
        return s1.top();
    }
    bool is_empty(){
        return s1.empty();
    }
};
int main(){
    Myqueue q;
    q.push(10);
    q.push(30);
    q.push(50);
    cout<<"The front element is "<<q.top();
    return 0;
}