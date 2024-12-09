#include<iostream>
#include<vector>
using namespace std;
void getPerms(vector<int>& nums, int index, vector<vector<int>> &ans){
    //base case
    if(index==nums.size()){
        ans.push_back({nums});
        return;
    }
    for(int i= index; i<nums.size(); i++){
        swap(nums[index],nums[i]);
        getPerms(nums,index+1,ans);
        swap(nums[index], nums[i]); //backtracking
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    getPerms(nums, 0, ans);
    return ans;
}
int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> result = permute(nums);
    for (const auto &perm : result)
    {
        for (int num : perm)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
