#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> daily_temp(vector<int>& temperature){
    int n = temperature.size();
    stack<int> st;
    vector<int> ans(n,0);
    for(int i=0; i<n; i++){
        while(!st.empty() && temperature[i]>temperature[st.top()]){
            int prev_index = st.top();
            st.pop();
            ans[prev_index] = i-prev_index;
        }
        st.push(i);
    }
    return ans;
}
int main(){
    vector<int> nums = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result = daily_temp(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}