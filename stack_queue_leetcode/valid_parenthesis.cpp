#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s){
    stack<int> st;
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        if(ch=='(' || ch=='[' || ch=='{'){
            st.push(ch);
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
    if(isValid(s)){
        cout<<"it is a valid parenthesis ";
    }
    else{
        cout<<"it is not a valid prenthesis ";
    }
    return 0;
}