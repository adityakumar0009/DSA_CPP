#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void get_subset(vector<int>& nums,vector<int>& ans,int index,vector<vector<int>>& get_all_subset){
    if(index==nums.size()){
        get_all_subset.push_back(ans);
        return;
    }
    int n = nums.size();
    //inclusion
    ans.push_back(nums[index]);
    get_subset(nums,ans,index+1,get_all_subset);
    ans.pop_back();
    //exclusion
    int i = index+1; 
    while(i<n && nums[i]==nums[i-1]) i++;
    get_subset(nums, ans, i, get_all_subset);
}
vector<vector<int>> subsets(vector<int>& nums){
    sort(nums.begin(),nums.end());
    vector<int> ans;
    vector<vector<int>> get_all_subset;
    get_subset(nums,ans,0,get_all_subset);
    return get_all_subset;
}
int main(){
    vector<int> nums = {1,2,2};
    vector<vector<int>> result = subsets(nums);
    for(int i=0; i<result.size(); i++){
        cout<<"[";
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"]";
    }
    cout<<endl;
    return 0;
}