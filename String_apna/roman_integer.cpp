#include<iostream>
#include<map>
using namespace std;
int roman_int(string s){
    map<char,int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        if(i<s.size()-1 && m[s[i]]<m[s[i+1]]){
            ans-= m[s[i]];
        }
        ans+=m[s[i]];
    }
    return ans;
}
int main(){
    string s = "VI";
    cout<<"the conversion of roman to string is "<<roman_int(s);
    return 0;

}