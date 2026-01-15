#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> four_sum(vector<int>& nums,int target){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        for(int j=i+1; j<n ; ){
            int p = j+1;
            int k = n-1;
            while(p<k){
                long long sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[p]+(long long)nums[k];
                if(sum<target){
                    p++;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[p],nums[k]});
                    p++;
                    k--;
                    while(p<k && nums[p]==nums[p-1]){
                        p++;
                    }
                }
            }
            j++;
            while(j<n && nums[j]==nums[j-1]){
                j++;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = four_sum(nums,target);
    for(int i=0; i<result.size(); i++){
        cout<<"[";
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"]\n";
    }
    return 0;
}