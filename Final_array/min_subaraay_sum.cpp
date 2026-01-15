#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int min_subarray_len(int target,vector<int>& nums){
    int curr_sum = 0;
    int left = 0;
    int right = 0;
    int min_len_window = INT_MAX;
    for(int right=0; right<nums.size(); right++){
        curr_sum+=nums[right];
        while(curr_sum>=target){
            int curr_len = right-left+1;
            min_len_window = min(min_len_window,curr_len);
            curr_sum-=nums[left];
            left++;
        }
    }
    if(min_len_window==INT_MAX){
        return 0;
    }
    else{
        return min_len_window;
    }
}
int main(){
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    cout<<"Min subarray sum is "<<min_subarray_len(target,nums);
    return 0;
}