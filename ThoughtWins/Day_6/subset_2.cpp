#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(vector<int>& nums,vector<int>& ans,int index,vector<vector<int>>& get_all_subsets){
    if(index==nums.size()){
        get_all_subsets.push_back(ans);
        return;
    }
    //inclusion
    ans.push_back(nums[index]);
    subset(nums,ans,index+1,get_all_subsets);
    ans.pop_back();
    //exclude
    int idx = index+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]){
        idx++;
    }
    subset(nums,ans,idx,get_all_subsets);
}
vector<vector<int>> subset(vector<int>& nums){
    vector<int> ans;
    vector<vector<int>> get_all_subsets;
    sort(nums.begin(),nums.end());
    subset(nums,ans,0,get_all_subsets);
    return get_all_subsets;
}
int main(){
    vector<int> nums = {1,2,2};
    vector<vector<int>> result = subset(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j != result[i].size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    return 0;
}