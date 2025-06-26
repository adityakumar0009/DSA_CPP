#include<iostream>
#include<vector>
using namespace std;
int trapping_rainwater(vector<int>& nums){
    int n = nums.size();
    vector<int> lmax(n,0);
    vector<int> rmax(n,0);
    lmax[0] = nums[0];
    rmax[n-1] = nums[n-1];
    //left max
    for(int i=1; i<n; i++){
        lmax[i] = max(lmax[i-1],nums[i]);
    }
    //right max
    for(int i=n-2; i>=0; i--){
        rmax[i] = max(rmax[i+1],nums[i]);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans+=min(lmax[i],rmax[i]) - nums[i];
    }
    return ans;
}
int main(){
    vector<int> nums = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Trapping Rain Water is "<<trapping_rainwater(nums);
    return 0;
}