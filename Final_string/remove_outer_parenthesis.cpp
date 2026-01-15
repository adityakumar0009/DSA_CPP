#include<iostream>
#include<stack>
using namespace std;
string remove_outer_parenthesis(string s){
    string result = "";
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='('){
            if(st.size()>0){
                result+=s[i];
            }
            st.push(s[i]);
        }
        else if(s[i]==')'){
            st.pop();
            if(st.size()>0){
                result+=s[i];
            }
        }
    }
    return result;
}
int main(){
    string s = "(()())(())";
    cout<<"After removing the outer parenthesis string become "<<remove_outer_parenthesis(s);
    return 0;
}