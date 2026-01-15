#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int max_subarray(vector<int>& nums){
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for(int i=0; i<nums.size(); i++){
        curr_sum+=nums[i];
        max_sum = max(max_sum,curr_sum);
        if(curr_sum<0){
            curr_sum = 0;
        }
    }
    return max_sum;
}
int main(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<"Maximum subarray sum is "<<max_subarray(nums);
    return 0;
}