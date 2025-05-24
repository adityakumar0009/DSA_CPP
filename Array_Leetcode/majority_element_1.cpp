#include<iostream>
#include<vector>
using namespace std;
int majority_element(vector<int>& nums){
    int n = nums.size();
    for(int i=0; i<n; i++){
        int freq = 0;
        for(int j=0; j<n; j++){
            if(i == j){
                freq++;
            }
        }
        if(freq>n/2){
            return i;
        }
    }
}
int main(){
    vector<int> nums = {3, 2, 3};
    cout<<"majority element is "<<majority_element(nums);
    return 0;
}