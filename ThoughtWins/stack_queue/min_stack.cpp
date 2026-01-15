#include<iostream>
#include<stack>
using namespace std;
class Minstack{
    public:
    stack<pair<int,int>> s;
    void push(int val){
        if(s.empty()){
            s.push({val,val});
        }
        else{
            int minval = min(val,s.top().second);
            s.push({val,minval});
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
    Minstack ms;

    ms.push(5);
    ms.push(2);
    ms.push(8);
    ms.push(1);
    ms.push(3);

    cout << "Top element: " << ms.top() << endl;        // 3
    cout << "Minimum element: " << ms.getmin() << endl; // 1

    ms.pop();                                           // removes 3
    cout << "After popping, Top: " << ms.top() << endl; // 1
    cout << "Minimum: " << ms.getmin() << endl;         // 1

    ms.pop();                                           // removes 1
    cout << "After popping, Top: " << ms.top() << endl; // 8
    cout << "Minimum: " << ms.getmin() << endl;         // 2

    return 0;
    return 0;
}