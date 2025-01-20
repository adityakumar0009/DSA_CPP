#include<iostream>
#include<stack>
using namespace std;
void deleteMiddle(stack<int> &s, int size, int count){
    if(count==size/2){
        s.pop();
        return ;
    }
    int temp = s.top();
    s.pop();
    deleteMiddle(s,size,count+1);
    s.push(temp);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    int size = s.size();
    cout<<"size of the stack is->"<<size<<endl;
    int count = 0;
    deleteMiddle(s,size,count);
    cout<<"current size of the stack is->"<<s.size()<<endl;
    return 0;
}