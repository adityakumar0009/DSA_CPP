#include <iostream>
#include <queue>
using namespace std;
class mystack
{
public:
    queue<int> q1;
    queue<int> q2;
    mystack()
    {
    }
    void push(int x)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    int pop()
    {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    int top()
    {
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};
int main()
{
    mystack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}