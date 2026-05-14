#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool is_duplicate(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for(int i=1; i<nums.size(); i++){
        if(nums[i]=nums[i-1]){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> nums = {1, 2, 3, 1};
    if(is_duplicate(nums)){
        cout<<"It contains Duplicate"<<endl;
    }
    else{
        cout<<"It doesnot contains Duplicate"<<endl;
    }
    return 0;
}