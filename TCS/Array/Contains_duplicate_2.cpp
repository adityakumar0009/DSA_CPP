#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i])!=m.end()){
                if(i-m[nums[i]]<=k){
                    return true;
                }
            }
            m[nums[i]] = i;
        }
        return false;
    }
int main(){
    vector<int> nums = {1, 2, 3, 1};
    int k = 2;
    if(containsNearbyDuplicate(nums,k)){
        cout<<"It is not duplicate"<<endl;
    }
    else{
        cout<<"It is duplicate"<<endl;
    }
    return 0;
}