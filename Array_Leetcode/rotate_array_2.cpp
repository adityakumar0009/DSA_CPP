#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate_array(vector<int>& nums,int k){
    int n = nums.size();
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k =3;
    rotate_array(nums,k);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}