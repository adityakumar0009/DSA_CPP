#include<iostream>
#include<vector>
using namespace std;
int water_trapp(vector<int> &nums){
    int n = nums.size();
    vector<int> lmax(n,0);
    vector<int> rmax(n,0);
    lmax[0]= nums[0];
    rmax[n-1] = nums[n-1];
    for(int i=1; i<n; i++){
        lmax[i] = max(lmax[i-1],nums[i]);
    }
    for(int i=n-2; i>=0; i++){
        rmax[i] = max(rmax[i+1],nums[i]);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans+=min(lmax[i],rmax[i])-nums[i];
    }
    return ans;
}
int main(){
    vector<int> nums = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout<<"Max_Rainwater_trapping is -> "<<water_trapp(nums);
    return 0;
}