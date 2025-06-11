#include<iostream>
#include<vector>
using namespace std;
vector<int> one_plus(vector<int>& digits){
    int n = digits.size();
    for(int i=n-1; i>=0; i++){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
        digits[i]=0;
    }
    //if single 9 element is present
    digits.insert(digits.begin(),1);
    return digits;
}
int main(){
    vector<int> digits = {1, 2, 3};
    vector<int> ans = one_plus(digits);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}