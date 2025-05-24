#include<iostream>
#include<vector>
using namespace std;
int majority_element(vector<int>& nums){
    int n = nums.size();
    for(int val : nums){
        int freq = 0;
        for(int el: nums){
            if(val == el){
                freq++;
            }
        }
        if(freq>n/2){
            return val;
        }
    }
}
int main(){
    vector<int> nums = {3, 2, 3};
    cout<<"majority element is "<<majority_element(nums);
    return 0;
}