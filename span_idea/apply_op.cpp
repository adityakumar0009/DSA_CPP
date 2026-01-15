#include<iostream>
#include<vector>
using namespace std;
vector<int> apply_op(vector<int>& nums){
    int n = nums.size();
    for(int i=0; i<n-1; i++){
        if(nums[i]==nums[i+1]){
            nums[i] = nums[i] * 2;
            nums[i + 1] = 0;
        }
    }
    vector<int> ans(n,0);
    int index = 0;
    for(int i=0; i<n; i++){
        if(nums[i]!=0){
            ans[index++] = nums[i];
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1, 2, 2, 1, 1, 0};
    vector<int> result = apply_op(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}