#include<iostream>
#include<vector>
using namespace std;
int trapping_water(vector<int>& nums){
    int n = nums.size();
    vector<int> lmax(n,0);
    vector<int> rmax(n,0);
    lmax[0] = nums[0];
    rmax[n-1] = nums[n-1];
    for(int i=1; i<n; i++){
        lmax[i]=max(lmax[i-1],nums[i]);
    }
    for(int j=n-1; j>0; j--){
        rmax[j] = max(rmax[j+1],nums[j]);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans+=min(lmax[i],rmax[i])-nums[i];
    }
    return ans;
}
int main(){
    vector<int> nums = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout<<"Maximum rainwater trapping is "<<trapping_water(nums);
    return 0;
}