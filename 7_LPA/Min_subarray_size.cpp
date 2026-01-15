#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int min_sub_len(int target,vector<int>& nums){
    int curr_sum = 0;
    int st = 0;
    int end = 0;
    int min_len = INT_MAX;
    for(int end =0; end<nums.size(); end++){
        curr_sum+=nums[end];
        while(curr_sum>=target){
            int curr_len = end-st+1;
            min_len = min(min_len,curr_len);
            curr_sum-=nums[st];
            st++;
        }
    }
    if(min_len==INT_MAX){
        return 0;
    }
    else{
        return min_len;
    }
}
int main(){
    int target = 7;
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    cout<<"Minimum subarray size is "<<min_sub_len(target,nums);
    return 0;
}