#include<iostream>
#include<stack>
using namespace std;
void deleteMiddle(stack<int>& s, int N, int current ){
    if(current = N/2){
        s.pop();
        return ;
    }
    int temp = s.top();
    s.pop();
    deleteMiddle(s,N,current+1);
    s.push(temp);
}
int main(){
    stack<int> s;
    s.push(4);
    s.push(2);
    s.push(9);
    s.push(5);
    s.push(3);
    int size = s.size();
    cout<<"the size of the stack is->"<<size<<endl;
    deleteMiddle(s,size,0);
    cout<<"the current size of the stack is->"<<s.size()<<endl;
    return 0;
}