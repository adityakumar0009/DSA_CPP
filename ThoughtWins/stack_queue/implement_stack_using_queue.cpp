#include<iostream>
#include<queue>
using namespace std;
class Mystack{
    queue<int> q1;
    queue<int> q2;

public:
    void push(int x)
    {
        while (q1.size() > 0)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while (q2.size() > 0)
        {
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
    Mystack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;   // 30
    cout << "Pop: " << st.pop() << endl;           // 30
    cout << "Top after pop: " << st.top() << endl; // 20
    cout << "Is empty? " << (st.empty() ? "Yes" : "No") << endl;
    return 0;
}