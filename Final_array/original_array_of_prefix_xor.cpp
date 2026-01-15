#include<iostream>
#include<vector>
using namespace std;
vector<int> find_array(vector<int>& nums){
    vector<int> ans;
    ans.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++){
        ans.push_back(nums[i]^nums[i-1]);
    }
    return ans;
}
int main(){
    vector<int> nums = {5, 2, 0, 3, 1};
    vector<int> result = find_array(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}