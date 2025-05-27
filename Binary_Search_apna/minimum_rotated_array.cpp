#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minimum_rotated(vector<int>& nums){
    sort(nums.begin(),nums.end());
    return nums[0];
}
int main(){
    vector<int> nums = {3, 4, 5, 1, 2};
    cout<<"minimum element is found at index "<<minimum_rotated(nums);
    return 0;
}