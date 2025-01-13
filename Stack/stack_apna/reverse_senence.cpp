#include<iostream>
#include<stack>
using namespace std;
void rev_sen(string s){
    stack<string> st;
    for(int i=0; i<s.length(); i++){
        string words = "";
        while(s[i]!=' ' && s.length()){
            words+=s[i];
            i++;
        }
        st.push(words);

    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    string s = "hello,i am aditya.";
    rev_sen(s);
    return 0;
}