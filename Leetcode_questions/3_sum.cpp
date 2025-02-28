#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    public:
    vector<vector<int>> three_sum(vector<int> &nums){
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                }
            }
        }
        return ans;
    }
};
int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    solution sol;
    vector<vector<int>> result = sol.three_sum(nums);
    for (auto &triplet : result)
    {
        cout << "[";
        for (int num : triplet)
        {
            cout << num << " ";
        }
        cout << "] ";
    }
    return 0;
}