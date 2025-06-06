#include<iostream>
using namespace std;
char difference(string& s,string& t){
    char diff = 0;
    for(int i=0; i<s.size(); i++){
        diff^=s[i];
    }
    for(int j=0; j<t.size(); j++){
        diff^=t[j];
    }
    return diff;
}
int main(){
    string s = "bc";
    string t = "bcd";
    cout<<"the difference is "<<difference(s,t);
    return 0;
}