#include<iostream>
#include<stack>
using namespace std;
class Myqueue{
    public:
    stack<int> s1;
    stack<int> s2;
    Myqueue(){

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
    Myqueue queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    cout<<"Top element is ->"<<queue.peek();
    cout << "Popped element -> " << queue.pop() << endl;           // Should print 10
    cout << "Front element after pop -> " << queue.peek() << endl; // Should print 20
    queue.pop();
    return 0;
}