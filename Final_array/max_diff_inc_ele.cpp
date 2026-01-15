#include<iostream>
#include<vector>
using namespace std;
int max_diff_inc_ele(vector<int>& nums){
    int max_diff = -1;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j]>nums[i]){
                    int diff = nums[j]-nums[i];
                    max_diff = max(max_diff,diff);
                }
            }
        }
    return max_diff;
}
int main(){
    vector<int> nums = {7, 1, 5, 4};
    cout<<"Max_diff_ele is "<<max_diff_inc_ele(nums);
    return 0;
}