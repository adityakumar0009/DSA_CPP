#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a;
    cin>>a;
    int ans = 0;
    unordered_map<string,int> m;
    m["monday"] = 6;
    m["tuesday"] = 5;
    m["wednesday"] = 4;
    m["thrusday"] = 3;
    m["friday"] = 2;
    m["saturday"] = 1;
    m["sunday"] = 0;
    if(a-m[s]>1){
        ans = 1+(a-m[s])/7;
    }
    cout<<ans;
    return 0;
}