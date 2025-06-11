#include<iostream>
#include<vector>
using namespace std;
bool can_jump(vector<int>& nums){
    int last_pos = nums.size()-1;
    for(int i=nums.size()-2; i>=0; i--){
        if(i+nums[i]>=last_pos){
            last_pos = i;
        }
    }
    return last_pos==0;
}
int main(){
    vector<int> nums = {2, 3, 1, 1, 4};
    if(can_jump(nums)){
        cout << "element in the array represents your maximum jump length at that position "<<endl;
    }
    else{
        cout << "element not in the array represents your maximum jump length at that position";
    }
    return 0;
}