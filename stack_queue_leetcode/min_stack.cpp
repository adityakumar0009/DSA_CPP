#include <iostream>
#include <stack>
#include <utility>

using namespace std;

class MinStack
{
public:
    stack<pair<int, int>> s;

    MinStack()
    {
        // Constructor
    }

    void push(int val)
    {
        if (s.empty())
        {
            s.push({val, val});
        }
        else
        {
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }

    void pop()
    {
        if (!s.empty())
        {
            s.pop();
        }
        else
        {
            cout << "Stack is empty. Cannot pop.\n";
        }
    }

    int top()
    {
        if (!s.empty())
        {
            return s.top().first;
        }
        cout << "Stack is empty.\n";
        return -1;
    }

    int getMin()
    {
        if (!s.empty())
        {
            return s.top().second;
        }
        cout << "Stack is empty.\n";
        return -1;
    }
};
int main()
{
    MinStack *obj = new MinStack();

    obj->push(5);
    obj->push(3);
    obj->push(7);
    obj->push(2);

    cout << "Top element: " << obj->top() << endl;        
    cout << "Minimum element: " << obj->getMin() << endl; 

    obj->pop();

    cout << "Top element after pop: " << obj->top() << endl;
    cout << "Minimum element after pop: " << obj->getMin() << endl;

    delete obj;
    return 0;
}
