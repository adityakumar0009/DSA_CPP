#include<iostream>
#include<stack>
using namespace std;
void sort(stack<int>& s, int num){
    if(s.empty() || !s.empty() && s.top()>num){  //s.top()<num for descending order.
        s.push(num);
        return ;
    }
    int n = s.top();
    s.pop();
    //recursive call
    sort(s,num);
    s.push(n);
}
void sort_stack(stack<int>& s){
    if(s.empty()){
        return ;
    }
    int num = s.top();
    s.pop();
    //recursive call
    sort_stack(s);
    sort(s,num);
}
int main(){
    int num = 5;
    stack<int> s;
    s.push(4);
    s.push(-1);
    s.push(5);
    s.push(-5);
    s.push(7);
    sort_stack(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
    return 0;
}