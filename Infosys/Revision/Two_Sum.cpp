#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> two_sum(vector<int>& nums,int target){
    vector<int> ans;
    unordered_map<int, int> m;
    for(int i=0; i<nums.size(); i++){
        int first = nums[i];
        int second = target - first;
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
    vector<int> ans = two_sum(nums, target);
    for(int arr : ans){
        cout << arr << " ";
    }
    return 0;
}