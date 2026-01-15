#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> two_sum(vector<int>& nums,int target){
    unordered_map<int,int> mp;
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        int first = nums[i];
        int second = target-first;
        if(mp.find(second)!=mp.end()){
            ans.push_back(mp[second]);
            ans.push_back(i);
        }
        mp[first] = i;
    }
    return ans;
}
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = two_sum(nums,target);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}