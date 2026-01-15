#include<iostream>
using namespace std;
int max_power(string s){
    int n = s.size();
    int count = 1;
    int ans = 0;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        ans = max(ans,count);
    }
    return ans;
}
int main(){
    string s = "leetcode";
    cout<<"The length of most consecutive ch is "<<max_power(s);
    return 0;
}