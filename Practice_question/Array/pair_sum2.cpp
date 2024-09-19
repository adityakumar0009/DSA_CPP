#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int target){
    vector<int> ans;
    int i =0;
    int j = nums.size()-1;
    while(i<j){
        int pairsum = nums[i] + nums[j];
        if(pairsum>target){
            j--;
        }
        if(pairsum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
using namespace std;
int main(){
    vector<int> nums = {2,4,6,7,8};
    int target = 13;
    vector<int> ans = pairsum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<" ";
    return 0;
}