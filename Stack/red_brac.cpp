#include<iostream>
#include<stack>
using namespace std;
bool is_redundant(string s){
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(ch=='(' || ch=='+' || ch=='-' ||ch=='/' || ch =='*'){
            st.push(ch);
        }
        else if(ch==')'){
            while (st.top()!='(')
            {
                bool is_redudant = true;
                char top = st.top();
                if(top=='+' || top =='-' || top=='/' || top =='*'){
                    is_redudant = false;
                }
                st.pop();
            }
            st.pop();
            if(is_redundant) {
                return true;
            }
        }
    }
    return false;
}
int main(){
    string s = "(b+(a*c))";
    if(is_redundant(s)){
        cout<<"it is redundant"<<endl;
    }
    else{
        cout<<"it is not redundant"<<endl;
    }
    return 0;
}