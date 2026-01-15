#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> pair_sum(vector<int>& nums,int target){
    sort(nums.begin(),nums.end());
    int left = 0;
    int right = nums.size()-1;
    while(left<right){
        int pair_sum = nums[left]+nums[right];
        if(pair_sum==target){
            return {left,right};
        }
        else if(pair_sum<target){
            left = left+1;
        }
        else{
            right = right-1;
        }
    }
    return {-1,-1};
}
int main(){
    vector<int> nums = {3, 2, 4, 7, 5};
    int target = 9;
    vector<int> result = pair_sum(nums, target);
    if (!result.empty()) {
        cout << "Pair found at indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }
    return 0;
}