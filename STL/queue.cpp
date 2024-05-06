#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> s;
    s.push("aditya");
    s.push("sinha");
    cout<<"elements"<<" "<<s.size()<<endl;
    cout<<"elements"<<" "<<s.front()<<endl;
    s.pop();
    cout<<"elements"<<" "<<s.size()<<endl;   
      cout<<"elements"<<" "<<s.front()<<endl;
}