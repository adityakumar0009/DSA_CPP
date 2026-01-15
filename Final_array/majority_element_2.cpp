#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> majority_element(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int freq = 1;
    vector<int> ans;
    for(int i=1; i<nums.size(); i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            if(freq>nums.size()/3){
                ans.push_back(nums[i-1]);
            }
            freq = 1;
        }
    }
    if(freq>nums.size()/3){
        ans.push_back(nums[n-1]);
        return ans;
    }
}
int main(){
    vector<int> nums = {3,2,3};
    vector<int> result = majority_element(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i];
    }
    return 0;
}