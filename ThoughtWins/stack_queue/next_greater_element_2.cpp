#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> next_greater(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,-1);
    stack<int> st;
    for(int i=2*n-1; i>=0; i--){
        while(st.size()>0 && nums[st.top()]<=nums[i%n]){
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
    vector<int> nums = {1, 2, 1};
    vector<int> result = next_greater(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}