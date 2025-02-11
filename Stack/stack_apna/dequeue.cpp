#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(4);
    dq.push_front(3);
    for(auto i : dq){
        cout<<i<<" ";
    cout<<"\n";   
    }
    cout << endl;
    dq.pop_back();
    dq.pop_front();
    for(auto i : dq){
        cout<<i<<" ";
    cout<<"\n";   
    }
    cout<<endl;
    cout<<dq.size();
    return 0;
}