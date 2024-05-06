#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("aditya");
    s.push("kumar");
    s.push("sinha");
    cout<<"at top"<<" "<<s.top()<<endl;
    s.pop();
    cout<<"at top"<<" "<<s.top()<<endl;
    cout<<"size"<<" "<<s.size();
    cout<<"empty or not"<<" "<<s.empty();
}