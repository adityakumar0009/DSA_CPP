#include<iostream>
#include<stack>
using namespace std;
int min_add_valid_parenthesis(string s){
    stack<int> st;
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            if(st.size()>0 && st.top()==')'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }
    return st.size();
}
int main(){
    string s = "())";
    cout<<"Min add to make valid parenthesis is "<<min_add_valid_parenthesis(s);
    return 0;
}