#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int max_width_vertical(vector<vector<int>>& nums){
    sort(nums.begin(),nums.end());
    int max_area = 0;
    for(int i=1; i<nums.size(); i++){
        int ans = nums[i][0]-nums[i-1][0];
        max_area = max(max_area,ans);
    }
    return max_area;
}
int main(){
    vector<vector<int>> nums = {{8,7},{9,9},{7,4},{9,7}};
    cout<<"The max width vertical area is "<<max_width_vertical(nums);
    return 0;
}