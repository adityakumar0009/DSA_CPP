#include<iostream>
#include<vector>
using namespace std;
int remove_element(vector<int>& nums){
    int n = nums.size();
    int i =2;
    for(int j=2; j<n; j++){
        if(nums[j]!=nums[i-2]){
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
int main(){
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    cout << "unique element appears at most twice " << remove_element(nums);
    return 0;
}