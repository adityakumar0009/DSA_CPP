#include<iostream>
#include<stack>
using namespace std;
bool is_valid_parenthesis(string s){
    stack<int> st;
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(!st.empty()){
                if((ch==')' && st.top()=='(' || ch==']' && st.top()=='[' || ch=='}' && st.top()=='{')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string s = "([{}])";
    if(is_valid_parenthesis(s)){
        cout<<"It is a valid parenthesis";
    }
    else{
        cout<<"It is not a valid paenthesis";
    }
    return 0;
}