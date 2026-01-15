#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>& nums,int target,int st,int end){
    if(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>=target){
            return binary_search(nums,target,st,mid-1);
        }
        else{
            return binary_search(nums,target,mid+1,end);
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    cout<<"Binary search is "<<binary_search(nums,target,0,nums.size()-1);
    return 0;
}