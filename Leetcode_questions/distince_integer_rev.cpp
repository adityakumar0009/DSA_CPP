#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_set>
using namespace std;
int reverse(int num){
    int ans = 0;
    while(num!=0){
        int digit = num%10;
        ans = (ans*10) + digit;
        num = num/10;
    }
    return ans;
}
int distinct_integer(vector<int> &nums){
    unordered_set<int> unique(nums.begin(),nums.end());
    for(int num : nums){
        unique.insert(reverse(num));
    }
    return unique.size();
}
int main(){
    vector<int> nums = {1, 13, 10, 12, 31};
    cout<<"distinct rev integer-> "<<distinct_integer(nums);
    return 0;
}