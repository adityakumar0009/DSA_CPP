#include<iostream>
#include<stack>
using namespace std;
bool is_valid_parenthesis(string s){
    stack<int> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{//closing
            if(st.size()==0){
                return false;
            }
            if((st.top()=='(' && s[i]==')')||
               (st.top()=='{' && s[i]=='}')||
               (st.top()=='[' && s[i]==']')){
                st.pop();
               }
            else{//no match
                return false;
            }   
        }
    }
    return st.size()==0;
}
int main(){
    string s = "({[]})";
    if(is_valid_parenthesis(s)){
        cout<<"it is a valid parenthesis "<<endl;
    }
    else{
        cout<<"it is not a valid parenthesis "<<endl;
    }
    return 0;
}