#include<iostream>
#include<stack>
using namespace std;
bool is_valid_parenthesis(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        if(ch=='[' || ch=='(' || ch =='{'){
            st.push(ch);
        }
        else{
            if (!st.empty()) {
                    if ((ch == ')' && st.top() == '(') || 
                        (ch == ']' && st.top() == '[') || 
                        (ch == '}' && st.top() == '{')) {
                        st.pop();
                    } 
                    else {
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
    string s = "[({})]";
    if(is_valid_parenthesis(s)){
        cout<<"it is valid parenthesis"<<endl;
    }
    else{
        cout<<"it is not a vaild parenthesis"<<endl;
    }
    return 0;
}