#include<iostream>
#include<vector>
using namespace std;
bool monotonomic(vector<int>& nums){
    int n = nums.size();
    bool is_increasing = false;
    bool is_decresaing = false;
    for(int i=0; i<n-1; i++){
        if(nums[i]<nums[i+1]){
            is_increasing = true;
        }
        if(nums[i]>nums[i+1]){
            is_decresaing = true;
        }
    }
    if(is_increasing==true && is_decresaing==true){
        return false;
    }
    return true;
}
int main(){
    vector<int> nums = {1, 2, 2, 3};
    if(monotonomic(nums)){
        cout<<"It is a monotonomic array"<<endl;
    }
    else{
        cout<<"It is not a monotonomic array"<<endl;
    }
    return 0;
}