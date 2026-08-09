#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> stock_span(vector<int>& arr){
    int n = arr.size();
    stack<int> st;
    vector<int> span(n);
    for(int i=0; i<n; i++){
        while(st.size() > 0 && arr[st.top()] <=arr[i]){
            st.pop();
        }
        if(st.empty()){
            span[i] = i+1;
        }
        else{
            span[i] = i - st.top();
        }
        st.push(i);
    }
    return span;
}
int main(){
    vector<int> arr = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans = stock_span(arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}