#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> four_sum(vector<int>& nums,int target){
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0; i<n; i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1; j<n; ){
            int p = j+1;
            int q = n-1;
            while(p<q){
                long long sum = (long long)nums[i]+(long long)nums[j] + (long long)nums[p] + (long long)nums[q];
                if(sum<target){
                    p++;
                }
                else if(sum>target){
                    q--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                    p++;
                    q--;
                    while(p<q && nums[q]==nums[q-1]){
                    continue;
                    }
                }
            }
            j++;
            while (j < n && nums[j] == nums[j - 1]){
                j++;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {2,2,2,2};
    int target = 8;
    vector<vector<int>> result = four_sum(nums,target);
    cout << "Quadruplets:\n";
    for(auto &quad : result){
        cout << "[ ";
        for(int num : quad){
            cout << num << " ";
        }
        cout << "]\n";
    }
    return 0;
}