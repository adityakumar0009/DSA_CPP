#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> find_duplicate(vector<int>& nums){
    sort(nums.begin(),nums.end());
    vector<int> ans;
    for(int i=1; i<nums.size(); i++){
        if(nums[i]==nums[i-1]){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result = find_duplicate(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}