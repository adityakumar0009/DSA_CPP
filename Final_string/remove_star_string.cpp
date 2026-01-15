#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string remove_star(string s){
    stack<int> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='*'){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    string result = "";
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    string s = "leet**cod*e";
    cout<<"After removing star -> "<<remove_star(s);
    return 0;
}