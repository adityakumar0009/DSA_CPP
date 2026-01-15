#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string remove_elements(string s){
    stack<char> st;
    int n = s.size();
    for(int i=0; i<n; i++){
        if(st.empty() || st.top()!=s[i]){
            st.push(s[i]);
        }
        else{
            st.pop();
        }
    }
    string result = "";
    while(st.size()>0){
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    string s = "abbaca";
    cout<<"String after removing adajecent duplicates string become "<<remove_elements(s);
    return 0;
}