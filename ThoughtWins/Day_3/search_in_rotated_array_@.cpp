#include<iostream>
#include<vector>
using namespace std;
bool search(vector<int>& nums,int target){
    int n = nums.size();
    int st = 0;
    int end = n-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            return true;
        }
        //handling duplicate
        if(nums[st]==nums[mid] && nums[end]==nums[mid]){
            st++;
            end--;
            continue;
        }
        //left sorted
        if(nums[st]<=nums[mid]){
            if(nums[st]<=target && target<=nums[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        //right sorted
        else{
            if(nums[mid]<=target && target<=nums[end]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return false;
}
int main(){
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;
    if(search(nums,target)){
        cout<<"Element is present in sorted array"<<endl;
    }
    else{
        cout<<"Element is not present in sorted array";
    }
    return 0;
}