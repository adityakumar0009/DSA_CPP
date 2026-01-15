#include<iostream>
#include<vector>
using namespace std;
vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        long long left_Sum = 0;
        for(int i=0; i<n; i++){
            long long right_sum = sum-left_Sum-nums[i];
            ans[i] = abs(right_sum-left_Sum);
            left_Sum+=nums[i];
        }
        return ans;
    }
int main(){
    vector<int> nums = {10, 4, 8, 3};
    vector<int> result = leftRightDifference(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}