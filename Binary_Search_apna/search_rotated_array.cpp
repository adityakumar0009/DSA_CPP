#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>& nums, int target){
    int st = 0;
    int end = nums.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        //left portion
        if(nums[st]<=nums[mid]){
            if(target>=nums[st] && target<=nums[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        //right portion
        else{
            if(target>=nums[mid] && target<=nums[end]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout<<"target is present at index "<<binary_search(nums,target);
    return 0;
}