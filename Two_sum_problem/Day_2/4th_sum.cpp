#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> four_sum(vector<int>& nums,int target){
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        for(int j=i+1; j<n; ){
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            int k = j + 1;
            int q = n - 1;
            while (k < q)
            {
                long long sum = (long long)nums[i] + (long long)nums[j] +
                                (long long)nums[k] + (long long)nums[q];
                if (sum < target)
                {
                    k++;
                }
                else if (sum > target)
                {
                    q--;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[k], nums[q]});
                    k++;
                    q--;
                    while (k < q && nums[k] == nums[k - 1])
                        k++;
                    while (k < q && nums[q] == nums[q + 1])
                        q--;
                }      
                }
                j++;
                while(j<n && nums[j]==nums[j-1]){
                    ;
                }
            }
    }
    return ans;
}
int main(){
    vector<int> nums = {2, 2, 2, 2, 2};
    int target = 8;
    vector<vector<int>> result = four_sum(nums,target);
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<endl;
        }
    }
    return 0;
}