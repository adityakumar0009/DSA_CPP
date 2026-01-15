#include<iostream>
#include<map>
using namespace std;
bool isomorphic_string(string s,string t){
    map<char,char> x,y;
    for(int i=0; i<s.length(); i++){
        if ((x.count(s[i]) && x[s[i]] != t[i]) || (y.count(t[i]) && y[t[i]] != s[i])) {
                return false;
        }
        else{
            x[s[i]]=t[i];
            y[t[i]]=s[i];
        }
    }
    return true;
}
int main(){
    
    return 0;
}