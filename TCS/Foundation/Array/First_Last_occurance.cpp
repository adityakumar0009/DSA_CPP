#include<iostream>
#include<vector>
using namespace std;
int First_occurance(vector<int>& nums,int target){
    int ans = -1;
    int st = 0;
    int end = nums.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            ans = mid;
            end = mid-1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
}
int Last_occurance(vector<int>& nums,int target){
    int ans = -1;
    int st = 0;
    int end = nums.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            ans = mid;
            st = mid+1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,3,3,4,5};
    int target = 3;
    cout<<"First_occurance is "<<First_occurance(nums,target)<<endl;
    cout<<"Last_occurance is "<<Last_occurance(nums,target)<<endl;
    return 0;
}