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
            int min_val = min(val,s.top().second);
            s.push({val,min_val});
        }
    }
    void pop(){
        if(!s.empty()){
            s.pop();
        }
        else{
            cout<<"Stack is empty "<<endl;
        }
    }
    int top(){
        if(!s.empty()){
            return s.top().first;
        }
        cout<<"Stack is empty\n";
        return -1;
    }
    int get_min(){
        if(!s.empty()){
            return s.top().second;
        }
        cout<<"Stack is empty\n";
        return -1;
    }
};
int main(){
    Minstack *obj = new Minstack();
    obj->push(5);
    obj->push(3);
    obj->push(7);
    obj->push(2);

    cout << "Top element: " << obj->top() << endl;
    cout << "Minimum element: " << obj->get_min() << endl;

    obj->pop();

    cout << "Top element after pop: " << obj->top() << endl;
    cout << "Minimum element after pop: " << obj->get_min() << endl;

    delete obj;
    return 0;
}