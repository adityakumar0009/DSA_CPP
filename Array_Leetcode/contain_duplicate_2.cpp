#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool contain_duplicate(vector<int>& nums){
    unordered_map<int,int> m;
    for(int i=0; i<nums.size(); i++){
        if(m.find(nums[i])!=m.end()){
            return true;
        }
        m[nums[i]] = i;
    }
    return false;
}
int main(){
    vector<int> nums = {1, 2, 3, 1};
    if(contain_duplicate(nums)){
        cout<<"it contains the duplicate value "<<endl;
    }
    else{
        cout<<"it cannot contain the duplicate value "<<endl;
    }
    return 0;
}