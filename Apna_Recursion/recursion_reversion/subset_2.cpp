#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void get_allsubsets(vector<int>&nums,vector<int>&ans,int i, vector<vector<int>>& all_subsets){
    if(i==nums.size()){
        all_subsets.push_back(ans);
        return ;
    }
    //include
    ans.push_back(nums[i]);
    get_allsubsets(nums,ans,i+1,all_subsets);
    ans.pop_back();
    //exclude
    int idx = i+1;
    while(idx<nums.size() && nums[i]==nums[idx]){
        idx++;
    }
    get_allsubsets(nums, ans, idx, all_subsets);
}
vector<vector<int>> subset(vector<int>&nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> all_subsets;
    vector<int> ans;
    get_allsubsets(nums, ans, 0, all_subsets);
    return all_subsets;
}
int main(){
    vector<int> nums = {1,2,2};
    vector<vector<int>> result = subset(nums);
    for (const auto &subset : result)
    {
        cout << "{";
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}