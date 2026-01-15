#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool contain_duplicate(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=1; i<nums.size(); i++){
        if(nums[i]==nums[i-1]){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> nums = {1, 2, 3, 1};
    if(contain_duplicate(nums)){
        cout<<"It contain duplicate element "<<endl;
    }
    else{
        cout<<"It cannot contain duplicate element "<<endl;
    }
    return 0;
}