#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> prev_smaller(vector<int>& nums){
    stack<int> st;
    vector<int> result(nums.size(),0);
    for(int i=0; i<nums.size(); i++){
        while(st.size()>0 && st.top()>=nums[i]){
            st.pop();
        }
        if(st.empty()){
            result[i] = -1;
        }
        else{
            result[i] = st.top();
        }
        st.push(nums[i]);
    }
    return result;
}
int main(){
    vector<int> nums = {3,1,0,8,6};
    vector<int> ans = prev_smaller(nums);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}