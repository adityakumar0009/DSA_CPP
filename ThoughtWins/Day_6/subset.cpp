#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>& nums,vector<int>& ans,int index,vector<vector<int>>& get_all_subset){
    //base case;
    if(index==nums.size()){
        get_all_subset.push_back({ans});
        return;
    }
    //inclusion
    ans.push_back(nums[index]);
    subset(nums,ans,index+1,get_all_subset);
    ans.pop_back();
    //exclusion
    subset(nums,ans,index+1,get_all_subset);
}
vector<vector<int>> subset(vector<int>& nums){
    vector<int> ans;
    vector<vector<int>> get_all_subset;
    subset(nums,ans,0,get_all_subset);
    return get_all_subset;
}
int main(){
    vector<int> nums = {1,2,3};
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