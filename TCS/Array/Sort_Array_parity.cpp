#include<iostream>
#include<vector>
using namespace std;
vector<int> sort_parity(vector<int>& nums){
    int i = 0;
    int j = 0;
    while(i<nums.size()){
        if(nums[i]%2==0){
            swap(nums[i],nums[j]);
            j++;
        }
        i++;
    }
    return nums;
}
int main(){
    vector<int> nums = {3,1,2,4};
    vector<int> ans = sort_parity(nums);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}