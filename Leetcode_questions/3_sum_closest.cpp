#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    public:
    int three_sum_closest(vector<int> &nums, int target){
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = nums[0] + nums[1] + nums[2];
        for(int i = 0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if (abs(sum - target) < abs(ans - target))
                {
                    ans = sum;
                }
                if(sum<target){
                    j++;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    return sum;
                }
            }
        }
        return ans;
    }
};
int main(){
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    solution sol;
    int result = sol.three_sum_closest(nums,target);
    cout<<"closest sum is-> "<<result;
    return 0;
}