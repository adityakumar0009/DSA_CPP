#include<iostream>
#include<vector>
using namespace std;
int remove_element(vector<int>& nums,int val){
    int k = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]!=val){
            nums[k] = val;
            k++;
        }
    }
    return k;
}
int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    cout<<"After removing element become "<<remove_element(nums,val);
    return 0;
}