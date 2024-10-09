#include<iostream>
#include<stack>
using namespace std;
void insert_bottom(stack<int> & s, int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num = s.top();
    s.pop();

    //recursive call
    insert_bottom(s,x);
    s.push(num);

}
int main(){
    stack<int> s ;
    s.push(3);
    s.push(2);
    s.push(1);
    int x = 10;
    insert_bottom(s,x);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}