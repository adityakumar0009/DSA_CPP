#include<iostream>
#include<vector>
using namespace std;
int max_area(vector<int>& nums){
    int max_water = 0;
    int lp = 0;
    int rp = nums.size()-1;
    while(lp<rp){
        int w = rp-lp;
        int h = min(nums[lp],nums[rp]);
        int curr_water = w*h;
        max_water = max(max_water,curr_water);
        if(nums[lp]<nums[rp]){
            lp++;
        }
        else{
            rp--;
        }
    }
    return max_water;
}
int main(){
    vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<<"The container having maximum water is "<<max_area(nums);
    return 0;
}