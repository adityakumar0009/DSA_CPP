#include<iostream>
#include<vector>
using namespace std;
vector<int> one_plus(vector<int>& digit){
    int n = digit.size();
    for(int i=n-1; i>=0; i++){
        if(digit[i]<9){
            digit[i]++;
            return digit;
        }
        digit[i] = 0;
    }
    digit.insert(digit.begin(),1);
    return digit;
}
int main(){
    vector<int> digit = {1, 2, 3};
    vector<int> ans = one_plus(digit);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}