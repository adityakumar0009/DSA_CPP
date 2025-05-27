#include<iostream>
#include<vector>
using namespace std;
bool search_rotated(vector<int>& nums,int target){
    int n = nums.size();
    int st = 0;
    int end = nums.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            return true;
        }
        //handling duplicates
        if(nums[st]==nums[mid] && nums[mid]==nums[end]){
            st++;
            end--;
            continue;
        }
        //left rotated
        if(nums[st]<=nums[mid]){
            if(target>=nums[st] && target<=nums[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        //right rotated
        else{
            if(target>=nums[mid] && target<=nums[end]){
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
    vector<int> nums = {3, 4, 5, 1, 2};
    int target = 0;
    if(search_rotated(nums,target)){
        cout<<"target is present in nums"<<endl;
    }
    else{
        cout<<"target is not present in nums";
    }
    return 0;
}