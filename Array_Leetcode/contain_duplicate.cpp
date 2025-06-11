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
    vector<int> result = {1, 2, 3, 1};
    if(contain_duplicate(result)){
        cout<<"it contain duplicates"<<endl;
    }
    else{
        cout<<"it cannot contain duplicates"<<endl;
    }
    return 0;
}