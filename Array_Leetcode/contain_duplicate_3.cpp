#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool contain_near_duplicate(vector<int>& nums,int k){
    unordered_map<int,int> m;
    for(int i=0; i<nums.size(); i++){
        if(m.find(nums[i])!=m.end()){
            if(i-m[nums[i]]<=3){
                return true;
            }
        }
        m[nums[i]] = i;
    }
    return false;
}
int main(){
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;
    if(contain_near_duplicate(nums,k)){
        cout<<"it contain duplicate element "<<endl;
    }
    else{
        cout<<"it doesnot contain duplicate element "<<endl;
    }
    return 0;
}