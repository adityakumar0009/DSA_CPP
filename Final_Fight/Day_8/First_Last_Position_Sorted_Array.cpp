#include<iostream>
#include<vector>
using namespace std;
int left_part(vector<int>& nums,int target){
    int n = nums.size();
    int st = 0;
    int end = n-1;
    int first = -1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            first = mid;
            end = mid-1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return first;
}

int right_part(vector<int>& nums,int target){
    int last = -1;
    int n = nums.size();
    int st = 0;
    int end = n-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            last = mid;
            st = mid+1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return last;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    return {left_part(nums, target), right_part(nums, target)};
}
int main(){
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> ans = searchRange(nums,target);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}