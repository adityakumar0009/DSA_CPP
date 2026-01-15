#include<iostream>
#include<vector>
using namespace std;
vector<string> summary_range(vector<int>& nums){
    vector<string> result;
    for(int i=0; i<nums.size(); i++){
        int n = nums.size();
        int start = nums[i];
        while(i+1<n && nums[i+1]==nums[i]+1){
            i++;
        }
        if(start!=nums[i]){
            result.push_back(to_string(start)+"->"+to_string(nums[i]));
        }
        else{
            result.push_back(to_string(nums[i]));
        }
    }
    return result;
}
int main(){
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<string> result = summary_range(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<", ";
    }
    return 0;
}