#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> Two_sum(vector<int>& nums,int target){
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        int first = nums[i];
        int second = target-nums[i];
        if(m.find(second)!=m.end()){
            ans.push_back(m[second]);
            ans.push_back(i);
        }
        m[first] = i;
    }
    return ans;
}
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = Two_sum(nums,target);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}