#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;
int reverse(int num){
    int ans = 0;
    while(num!=0){
        int digit = num%10;
        ans = (ans*10)+digit;
        num = num/10;
    }
    return ans;
}
int count_distinct_integer(vector<int>& nums){
    unordered_set<int> unique(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i++){
        unique.insert(reverse(nums[i]));
    }
    return unique.size();
}
int main(){
    vector<int> nums = {1, 13, 10, 12, 31};
    cout<<"The number of unique elements is "<<count_distinct_integer(nums);
    return 0;
}