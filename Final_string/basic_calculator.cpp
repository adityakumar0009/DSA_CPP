#include<iostream>
#include<stack>
using namespace std;
int calculate(string s){
    stack<int> st;
    long curr_num = 0;
    char last_sign = '+';
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        if(isdigit(ch)){
            int digit = ch-'0';
            curr_num = curr_num*10+digit;
        }
        if((!isdigit(ch) && s[i]!=' ') || i==s.size()-1){
            if(last_sign=='+'){
                st.push(curr_num);
            }
            else if(last_sign=='-'){
                st.push(-curr_num);
            }
            else if(last_sign=='*'){
                int top = st.top();
                st.pop();
                st.push(top*curr_num);
            }
            else if(last_sign=='/'){
                int top = st.top();
                st.pop();
                st.push(top/curr_num);
            }
            last_sign = ch;
            curr_num = 0;
        }
    }
    int result = 0;
    while(st.size()>0){
        result+=st.top();
        st.pop();
    }
    return result;
}
int main(){
    string s = "3+2*2";
    cout<<"The output is "<<calculate(s);
    return 0;
}