#include<iostream>
#include<vector>
using namespace std;
int maxarea(vector<int>& nums){
    int max_water = 0;
    int lp = 0;
    int rp = nums.size()-1;
    while(lp<rp){
        int width = rp-lp;
        int height = min(nums[lp],nums[rp]);
        int curr_area = width*height;
        max_water = max(max_water,curr_area);
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
    cout<<"The container with most water is "<<maxarea(nums);
    return 0;
}