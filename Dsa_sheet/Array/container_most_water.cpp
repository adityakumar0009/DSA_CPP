#include<iostream>
#include<vector>
using namespace std;
int container_most_water(vector<int> & nums){
    int max_water = 0;
    int lp = 0;
    int rp = nums.size()-1;
    while(lp<rp){
        int w = rp-lp;
        int h = min(nums[lp],nums[rp]);
        int current_area = w*h;
        max_water = max(max_water,current_area);
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
    cout<<"container with most water is -> "<<container_most_water(nums);
    return 0;
}