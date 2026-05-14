#include<iostream>
#include<vector>
using namespace std;
int majority_element(vector<int>& nums){
    int result = 0;
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        if(count==0){
            result = nums[i];
        }
        if(result = nums[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return result;
}
int main(){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout<<"Majority element is "<<majority_element(nums);
    return 0;
}