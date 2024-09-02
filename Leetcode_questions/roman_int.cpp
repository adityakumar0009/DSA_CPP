#include<iostream>
#include<map>
using namespace std;
int roman_int(string s){
    map<char,int> m;
    m.insert({'I',1});
    m.insert({'V',5});
    m.insert({'X',10});
    m.insert({'L',50});
    m.insert({'C',100});
    m.insert({'D',500});
    m.insert({'M',1000});

    int ans = 0;
    for(int i=0; i<s.size();i++){
        if(i<s.size()-1 && m[s[i]]<m[s[i+1]]){
            ans-=m[s[i]];
        }
        else{
            ans+=m[s[i]];
        }
    }
    return ans;
}
int main(){
    string s = "IV";
    int ans = roman_int(s);
    cout<<ans;
    return 0;
}