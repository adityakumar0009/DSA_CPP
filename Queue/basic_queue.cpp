#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(11);
    cout<<"top ele is->"<<q.front()<<endl;
    q.push(12);
    cout<<"top ele is->"<<q.front()<<endl;
    q.push(13);
    cout<<"top ele is->"<<q.front()<<endl;
    cout<<"size of the queue is->"<<q.size()<<endl;
    q.pop();
    q.pop();
    q.pop();
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    return 0;
}