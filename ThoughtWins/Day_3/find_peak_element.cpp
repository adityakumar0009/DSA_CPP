#include<iostream>
#include<vector>
using namespace std;
int find_peak(vector<int>& nums){
    int st = 0;
    int end = nums.size()-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(nums[mid]>nums[mid+1]){
            end = mid;
        }
        else{
            st = mid+1;
        }
    }
    return end;
}
int main(){
    vector<int> nums = {1, 2, 3, 1};
    cout<<"The peak element present at index "<<find_peak(nums);
    return 0;
}