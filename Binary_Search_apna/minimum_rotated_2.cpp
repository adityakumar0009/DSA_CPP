#include<iostream>
#include<vector>
using namespace std;
int minimum_rotated(vector<int>& nums){
    int st = 0;
    int end = nums.size() - 1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]>end){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return nums[st];
}
int main(){
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << "minimum element is found at index " << minimum_rotated(nums);
    return 0;
}