#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
class solution{
    public:
        vector<vector<int>>three_sum(vector<int>&nums){
            int n = nums.size();
            vector<vector<int>> ans;
            set<vector<int>> s;
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    for(int k=j+1; k<n ;k++){
                        if(nums[i]+nums[j]+nums[k]==0){
                            vector<int> trip = {nums[i],nums[j],nums[k]};
                            sort(trip.begin(),trip.end());
                            if(s.find(trip)==s.end()){
                                s.insert(trip);
                                ans.push_back(trip);
                            }
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
    for(auto &triplet : result){
        cout<<'[';
        for(int num: triplet){
            cout<<num<<" ";
        }
        cout<<']';
    }
    return 0;
}