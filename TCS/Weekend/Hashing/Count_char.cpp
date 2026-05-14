#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}