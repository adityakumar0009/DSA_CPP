#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums){ //for each loop
            ans = ans^val;
        }
        return ans;
    }
int main(){
    vector<int> v = {2,2,1};
    cout<<"ans is->"<<singleNumber(v);

    return 0;
}