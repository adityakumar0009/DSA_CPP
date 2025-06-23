#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string remove_duplicates(string s){
    stack<char> st;
    string result = "";
    for(int i=0; i<s.size(); i++){
        if(st.empty() || st.top()!=s[i]){
            st.push(s[i]);
        }
        else{
            st.pop();
        }
    }
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    string s = "abbaca";
    cout << "After Remove All Adjacent Duplicates In String -> "<<remove_duplicates(s);
    return 0;
}