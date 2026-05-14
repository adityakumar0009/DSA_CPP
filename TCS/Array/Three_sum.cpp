#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> three_sum(vector<int>& nums){
    int n = nums.size();
    vector<vector<int>> result;
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int j = i+1;
        int k = n-1;
        while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                result.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
            }
            while (j < k && nums[j] == nums[j - 1])
                j++;
        }
    }
    return result;
}
int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = three_sum(nums); 
    for(int i=0; i<ans.size(); i++){
        cout<<"[";
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"]\n";
    }
    return 0;
}