#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> next_greater(vector<int>& nums){
    stack<int> st;
    int n = nums.size();
    vector<int> ans(nums.size(),-1);
    for(int i=2*nums.size()-1; i>=0; i--){
        while(st.size()>0 && nums[i%n]>=nums[st.top()]){
            st.pop();
        }
        if(st.empty()){
            ans[i%n] = -1;
        }
        else{
            ans[i%n] = nums[st.top()];
        }
        st.push(i%n);
    }
    return ans;
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 3};
    vector<int> result = next_greater(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}