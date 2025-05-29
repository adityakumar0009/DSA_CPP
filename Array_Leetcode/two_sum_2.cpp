 #include<iostream>
#include<vector>
using namespace std;
vector<int> two_sum(vector<int>& nums,int target){
    int st = 0;
    int end = nums.size()-1;
    while(st<end){
        int sum = nums[st]+nums[end];
        if(sum==target){
            return {st+1,end+1};
        }
        if(sum>target){
            end--;
        }
        else{
            st++;
        }
    }
    return {};
}
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = two_sum(nums,target);
    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;
}