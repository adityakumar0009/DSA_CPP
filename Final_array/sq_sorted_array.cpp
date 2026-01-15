#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sq_sorted_array(vector<int>& nums){
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        ans.push_back(nums[i]*nums[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> result = sq_sorted_array(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}