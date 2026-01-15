#include<iostream>
#include<stack>
using namespace std;
class Minstack{
    public:
    stack<pair<int,int>> s;
    Minstack(){

    }
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
        if(!s.empty()){
            s.pop();
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }
    int top(){
        if(!s.empty()){
            return s.top().first;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
        return -1;
    }
    int getMin(){
        return s.top().second;
    }

};
int main(){
    Minstack ms;
    ms.push(5);
    ms.push(3);
    ms.push(7);
    ms.push(2);

    cout << "Top: " << ms.top() << endl;    // 2
    cout << "Min: " << ms.getMin() << endl; // 2

    ms.pop();
    cout << "Top: " << ms.top() << endl;    // 7
    cout << "Min: " << ms.getMin() << endl; // 3
    return 0;
}