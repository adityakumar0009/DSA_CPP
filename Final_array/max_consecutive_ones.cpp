#include<iostream>
#include<vector>
using namespace std;
int max_consecutive_one(vector<int>& nums){
    int count = 0;
    int ans = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            count++;
        }
        else{
            count =0;
        }
        ans = max(ans,count);
    }
    return ans;
}
int main(){
    vector<int> nums = {1,1,0,1,1,1};
    cout<<"Maximum consecutive one is "<<max_consecutive_one(nums);
    return 0;
}