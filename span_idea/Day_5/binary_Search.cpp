#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>& nums,int target,int st,int end){
    if(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            return binary_search(nums,target,mid+1,end);
        }
        else{
            return binary_search(nums,target,st,mid-1);
        }
    }
    return -1;
}
int serach(vector<int>& nums,int target){
    return binary_search(nums,target,0,nums.size()-1);
}
int main(){
    vector<int> nums = {1, 0, 3, 5, 9, 12};
    int target = 9;
    cout << "target exists in nums and its index is "<<serach(nums,target);
    return 0;
}