#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int most_frequent(vector<int>& nums){
    unordered_map<int,int> m;
    int ans = -1;
    int max_freq = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]%2==0){
            m[nums[i]]++;
            if(m[nums[i]]>max_freq || (m[nums[i]]==max_freq && nums[i]<ans)){
                max_freq = m[nums[i]];
                ans = nums[i];
            }
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {0, 1, 2, 2, 4, 4, 1};
    cout<<"Most frequent even number is "<<most_frequent(nums);
    return 0;
}