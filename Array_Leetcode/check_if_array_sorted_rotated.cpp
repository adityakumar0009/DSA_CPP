#include<iostream>
#include<vector>
using namespace std;
bool is_sorted_rotated(vector<int> &nums){
    int n = nums.size();
    int count = 0;
    for(int i=1; i<n; i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[n-1]>nums[0]){
        count++;
        return count<=1;
    }
}
int main(){
    vector<int> nums = {3, 4, 5, 1, 2};
    if(is_sorted_rotated(nums)){
        cout<<"it is sorted and rotated array"<<endl;
    }
    else{
        cout<<"it is not sorted and rotated array";
    }
    return 0;
}