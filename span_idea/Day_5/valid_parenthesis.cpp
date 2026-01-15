#include<iostream>
#include<stack>
using namespace std;
bool is_valid(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        if(ch=='('||ch=='['||ch=='{'){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                if((ch==')' && st.top()=='(') || (ch==']' && st.top()=='[') || (ch=='}' && st.top()=='{')){
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
    string s = "()[]{}";
    if(is_valid(s)){
        cout<<"It is a valid palindrome"<<endl;
    }
    else{
        cout<<"It is not a valid palindrome"<<endl;
    }
    return 0;
}