#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int max_area(vector<int>& nums){
    int n = nums.size();
    int max_water = 0;
    int lp = 0;
    int rp = n-1;
    while(lp<rp){
        int width = rp-lp;
        int height = min(nums[lp],nums[rp]);
        int max_area = width*height;
        max_water = max(max_water,max_area);
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
    cout<<"Container with most water is "<<max_area(nums);
    return 0;
}