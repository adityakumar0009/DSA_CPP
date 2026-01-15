#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> plus_one(vector<int>& digits){
    int n = digits.size();
    for(int i=n-1; i>=0; i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(),1);
    return digits;
}
int main(){
    vector<int> digits = {1,2,3};
    vector<int> ans = plus_one(digits);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}