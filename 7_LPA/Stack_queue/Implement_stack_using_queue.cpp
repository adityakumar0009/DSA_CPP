#include<iostream>
#include<queue>
using namespace std;
class Mystack{
    public:
    queue<int> q1;
    queue<int> q2;
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
    bool empty(){
        return q1.empty();
    }
    int top(){
        return q1.front();
    }
};
int main(){
    Mystack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.top() << endl;                             // Output: 3
    cout << st.pop() << endl;                             // Output: 3
    cout << st.top() << endl;                             // Output: 2
    cout << (st.empty() ? "Empty" : "Not Empty") << endl; // Output: Not Empty
    return 0;
}