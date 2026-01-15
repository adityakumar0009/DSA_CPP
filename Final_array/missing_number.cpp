#include<iostream>
#include<vector>
using namespace std;
int missing_number(vector<int>& nums){
    int n = nums.size();
    int act_sum =0;
    int exp_sum=0;
    for(int i=0; i<n; i++){
        act_sum+=nums[i];
    }
    exp_sum = n*(n+1)/2;
    return exp_sum-act_sum;
}
int main(){
    vector<int> nums = {3,0,1};
    cout<<"The missing number is "<<missing_number(nums);
    return 0;
}