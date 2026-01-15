#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sorted_sq(vector<int>& nums){
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        ans.push_back(nums[i]*nums[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> ans = sorted_sq(nums);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}