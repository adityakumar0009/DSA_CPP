#include<iostream>
#include<vector>
using namespace std;
int left_part(vector<int>& nums,int target){
    int left = 0;
    int right = nums.size()-1;
    int first = -1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(nums[mid]==target){
            first = mid;
            right = mid-1;
        }
        else if(nums[mid]<target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return first;
}
int right_part(vector<int>& nums,int target){
    int left = 0;
    int right = nums.size()-1;
    int last = -1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(nums[mid]==target){
            last = mid;
            left = mid+1;
        }
        else if(nums[mid]<target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return last;
}
vector<int> search(vector<int>& nums,int target){
    return{left_part(nums,target),right_part(nums,target)};
}
int main(){
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> ans = search(nums,target);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}