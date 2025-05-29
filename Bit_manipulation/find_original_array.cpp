#include<iostream>
#include<vector>
using namespace std;
vector<int> find_orignal(vector<int>& nums){
    int n = nums.size();
    vector<int> arr;
    arr.push_back(nums[0]);
    for(int i=1; i<n; i++){
        arr.push_back(nums[i]^nums[i-1]);
    }
    return arr;
}
int main(){
    vector<int> nums = {5, 2, 0, 3, 1};
    vector<int> ans = find_orignal(nums);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}