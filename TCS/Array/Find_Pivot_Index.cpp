#include<iostream>
#include<vector>
using namespace std;
int pivot_index(vector<int>& nums){
    int n = nums.size();
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=nums[i];
    }
    int common_sum = 0;
    for(int i=0; i<n; i++){
        int left_sum = common_sum;
        int right_sum = sum-common_sum-nums[i];
        if(left_sum==right_sum){
            return i;
        }
        common_sum+=nums[i];
    }
    return -1;
}
int main(){
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout<<"Pivot index is "<<pivot_index(nums);
    return 0;
}