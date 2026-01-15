#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int min_subarray_len(vector<int>& nums,int target){
    int st = 0;
    int end = nums.size()-1;
    int curr_Sum = 0;
    int min_len = INT_MAX;
    for(int end=0; end<=nums.size(); end++){
        curr_Sum+=nums[end];
        while(curr_Sum>=target){
            int curr_length = end-st+1;
            min_len = min(min_len,curr_length);
            curr_Sum-=nums[st];
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
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    cout << "the minimal length of a subarray whose sum is greater than or equal to target is "<<min_subarray_len(nums,target);
    return 0;
}