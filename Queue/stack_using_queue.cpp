#include<iostream>
#include<queue>
using namespace std;
class Mystack{
    public:
    queue<int> q1;
    queue<int> q2;
    Mystack(){

    }
    void push(int x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    int pop(){
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    int top(){
        return q1.front();
    }
    bool empty(){
        return q1.empty();
    }
};
int main(){
    Mystack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Top element: " << stack.top() << endl;           // Should print 30
    cout << "Popped element: " << stack.pop() << endl;        // Should print 30
    cout << "Top element after pop: " << stack.top() << endl; // Should print 20
    return 0;
}