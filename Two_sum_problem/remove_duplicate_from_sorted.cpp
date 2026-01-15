#include<iostream>
#include<vector>
using namespace std;
int remove_duplicate(vector<int>& nums){
    if(nums.size()==0){
        return 0;
    }
    int x = 1;
    for(int y=1; y<nums.size(); y++){
        if(nums[y]!=nums[y-1]){
            nums[x] = nums[y];
            x++;
        }
    }
    return x;
}
int main(){
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout<<"After removing duplicate element "<<remove_duplicate(nums);
    return 0;
}