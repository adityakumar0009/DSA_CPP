#include<iostream>
#include<vector>
using namespace std;
int max_con_ones(vector<int>& nums){
    int ans = 0;
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            count++;
        }
        else{
            count=0;
        }
        ans = max(ans,count);
    }
    return ans;
}
int main(){
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout<<"Maximum consecutive ones is "<<max_con_ones(nums);
    return 0;
}