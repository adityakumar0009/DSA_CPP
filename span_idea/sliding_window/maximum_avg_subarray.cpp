#include<iostream>
#include<vector>
using namespace std;
double find_max_avg(vector<int>& nums,int k){
    int n = nums.size();
    int sum  =0 ;
    for(int i=0; i<k; i++){
        sum+=nums[i];
    }
    int max_sum = sum;
    int st_idx = 0;
    int end_idx = k;
    while(end_idx<nums.size()){
        sum = sum-nums[st_idx];
        st_idx++;

        sum = sum+nums[end_idx];
        end_idx++;

        max_sum = max(max_sum,sum);
    }
    return double (max_sum)/k;
}
int main(){
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout << "contiguous subarray whose length is equal to k "<<find_max_avg(nums,k);
    return 0;
}