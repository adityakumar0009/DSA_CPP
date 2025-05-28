#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int duplicate_number(vector<int>& nums){
    unordered_set<int> s;
    for(int val : nums){
        if(s.find(val)!=s.end()){
            return val;
        }
        s.insert(val);
    }
    return -1;
}
int main(){
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << "duplicate number is " << duplicate_number(nums);
    return 0;
}