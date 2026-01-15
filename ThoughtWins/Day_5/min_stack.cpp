#include<iostream>
#include<stack>
using namespace std;
class Minstack{
    public:
    Minstack(){

    }
    stack<pair<int,int>> s;
    void push(int val){
        if(s.empty()){
            s.push({val,val});
        }
        else{
            int minVal = min(val,s.top().second);
            s.push({val,minVal});
        }
    }
    void pop(){
        s.pop();
    }
    int top(){
        return s.top().first;
    }
    int getMin(){
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
    cout << "Minimum element: " << ms.getMin() << endl; // 1

    ms.pop();                                           // removes 3
    cout << "After popping, Top: " << ms.top() << endl; // 1
    cout << "Minimum: " << ms.getMin() << endl;         // 1

    ms.pop();                                           // removes 1
    cout << "After popping, Top: " << ms.top() << endl; // 8
    cout << "Minimum: " << ms.getMin() << endl;         // 2
    return 0;
}