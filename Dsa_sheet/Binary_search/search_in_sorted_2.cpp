#include<iostream>
#include<vector>
using namespace std;
bool sorted_search(vector<int> &nums, int target){
    int st = 0;
    int end = nums.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target){
            return true;
        }
        if(nums[st]==nums[mid] && nums[mid]==nums[end]){
            st++;
            end--;
            continue;
        }
        //left part sorted
        if(nums[st]<=nums[mid]){
            if(nums[st]<=target && target<=nums[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        //right part sorted
        else{
            if(target>=nums[mid] && nums[end]<=target){
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
    if(sorted_search(nums,target)){
        cout<<"elemnt is present in array";
    }
    else{
        cout<<"element is absent in array";
    }
    return 0;
}