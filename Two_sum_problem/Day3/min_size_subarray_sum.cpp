#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int min_size_subarray(int target,vector<int>& nums){
    int st = 0;
    int end = 0;
    int min_length = INT_MAX;
    int curr_sum = 0;
    for(int end=0; end<nums.size(); end++){
        curr_sum+=nums[end];
        while(curr_sum>=target){
            min_length = min(min_length,end-st+1);
            curr_sum-=nums[st];
            st++;
        }
    }
    if(min_length==INT_MAX){
        return 0;
    }
    else{
        return min_length;
    }
}
int main(){
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    cout << " minimal length of a subarray whose sum is greater than or equal to target "<<min_size_subarray(target,nums);
    return 0;
}