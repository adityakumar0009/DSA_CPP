#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sorted_square(vector<int>& nums){
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        ans.push_back(nums[i]*nums[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int> nums = {-4, -1, 0, 3, 10};
    cout << "array of the squares of each number sorted in non-decreasing order";
    vector<int> sorted = sorted_square(nums);
    for(int i=0; i<sorted.size(); i++){
        cout<<sorted[i]<<" ";
    }
    cout<<endl;
    return 0;
}