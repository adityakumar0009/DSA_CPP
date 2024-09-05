#include<iostream>
#include<map>
using namespace std;
bool iso_string(string s, string t){
    map<char,char> x,y;
    for(int i=0; i<s.size(); i++){
        if(x.count(s[i]) && x[s[i]]  != t[i]){
            return false;
        }
        else if(y.count(t[i]) && y[t[i]] != s[i]){
            return false;
        }
        else{
            x[s[i]]=t[i];
            y[t[i]] = s[i];
        }
    }
    return true;
}
int main(){
    string s = "doggy";
    string t = "abced";
    if(iso_string(s,t)){
        cout<<"it is an isomorphic string"<<endl;
    }
    else{
        cout<<"it is not an isomorphic string"<<endl;
    }
    return 0;
}