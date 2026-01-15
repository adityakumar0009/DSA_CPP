#include<iostream>
#include<vector>
using namespace std;
int way_to_split(vector<int>& nums){
    int n = nums.size();
    int count = 0;
    long long sum = 0;
    long long left_sum = 0;
    long long right_sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
    }
    for(int i=0; i<n-1; i++){
        left_sum+=nums[i];
        right_sum = sum-left_sum;
        if(left_sum>=right_sum){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> nums = {10, 4, -8, 7};
    cout<<"Number of way to split array is "<<way_to_split(nums);
    return 0;
}