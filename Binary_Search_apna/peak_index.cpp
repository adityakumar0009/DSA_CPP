#include<iostream>
#include<vector>
using namespace std;
int peak_index(vector<int>& nums){
    int st = 0;
    int end = nums.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
            return mid;
        }
        else if(nums[mid-1]<nums[mid]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {0, 2, 7, 0};
    cout<<"peak element found at index "<<peak_index(nums);
    return 0;
}