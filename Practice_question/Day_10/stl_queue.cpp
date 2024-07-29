#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<"first element->"<<q.front()<<endl;
    q.pop();
    cout<<"first element->"<<q.front()<<endl;
    q.pop();
    cout<<"first element->"<<q.front()<<endl;
    cout<<"size of queue is->"<<q.size();
    return 0;
}