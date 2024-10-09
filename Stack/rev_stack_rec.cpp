#include<iostream>
#include<stack>
using namespace std;
void insert_at_bottom(stack<int>& s,int n){
    if(s.empty()){
        s.push(n);
        return ;
    }
    int num = s.top();
    s.pop();

    //recursive call
    insert_at_bottom(s,n);
    s.push(num);

}
void rev_stack(stack<int>& s){
    //base case
    if(s.empty()){
        return ;
    }
    int num = s.top();
    s.pop();

    //recursive call
    rev_stack(s);
    insert_at_bottom(s,num);
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    rev_stack(s);
    cout<<"reversed stack are:->"<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}