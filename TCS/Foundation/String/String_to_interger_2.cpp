#include<iostream>
using namespace std;
int main(){
    string s = "321";
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        ans = ans*10+(s[i]-'0');
    }
    cout<<"Answer is "<<ans;
    return 0;
}