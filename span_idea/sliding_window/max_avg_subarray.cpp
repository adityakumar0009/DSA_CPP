#include<iostream>
#include<vector>
using namespace std;
int max_avg_subarray(vector<int>& nums,int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        sum+=nums[i];
    }
    int max_sum = sum;
    int st = 0;
    int end = k;
    while(end<nums.size()){
        sum = sum-nums[st];
        st++;
        sum = sum+nums[end];
        end++;
        max_sum = max(max_sum,sum);
    }
    return double(max_sum)/k;
}
int main(){
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    cout<<"Maximum average subarray is "<<max_avg_subarray(nums,k);
    return 0;
}