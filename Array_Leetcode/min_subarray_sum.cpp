#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int min_subarray_len(vector<int>& nums,int target){
    int current_sum = 0;
    int st = 0;
    int end = 0;
    int min_sub_len = INT_MAX;
    for(int end=0; end<nums.size(); end++){
        current_sum+=nums[end];
        while(current_sum>=target){
            int curr_sub_len = end-st+1;
            min_sub_len = min(min_sub_len,curr_sub_len);
            current_sum-=nums[st];
            st++;
        }
    }
    if(min_sub_len==INT_MAX){
        return 0;
    }
    else{
        return min_sub_len;
    }
}
int main(){
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    int ans = min_subarray_len(nums,target);
    cout << "Minimum subarray length: " << ans << endl;

    return 0;
}