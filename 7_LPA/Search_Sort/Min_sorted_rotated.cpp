#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int Find_min(vector<int>& nums){
    sort(nums.begin(),nums.end());
    return nums[0];
}
int main(){
    vector<int> nums = {3, 4, 5, 1, 2};
    cout<<"Minimum element in sorted rotated array is "<<Find_min(nums);
    return 0;
}