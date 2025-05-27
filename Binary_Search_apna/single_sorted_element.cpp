#include<iostream>
#include<vector>
using namespace std;
int single_sorted(vector<int>& nums){
    int n = nums.size();
    int st = 0;
    int end = n-1;
    int mid = st + (end - st) / 2;
    if(n==1){
        return nums[0];
    }
    if(nums[mid]==0 && nums[0]!=nums[1]){
        return nums[mid];
    }
    if(nums[mid]==n-1 && nums[mid]!=nums[mid+1]){
        return nums[mid];
    }
    while(st<=end){
        if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid]){
            return nums[mid];
        }
        if(mid%2==0){
            if(nums[mid-1]==nums[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{
            if(nums[mid-1]==nums[mid]){
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
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout<<"single sorted element is "<<single_sorted(nums);
    return 0;
}