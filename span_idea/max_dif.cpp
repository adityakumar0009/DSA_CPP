#include<iostream>
#include<vector>
using namespace std;
int max_diff(vector<int>& nums){
    int diff = -1;
    int n = nums.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[j]>nums[i]){
                int max_diff = nums[j]-nums[i];
                diff = max(diff,max_diff);
            }
        }
    }
    return diff;
}
int main(){
    vector<int> nums = {7, 1, 5, 4};
    cout << "Maximum Difference Between Increasing Elements "<<max_diff(nums);
    return 0;
}
