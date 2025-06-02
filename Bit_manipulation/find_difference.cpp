#include<iostream>
using namespace std;
char difference(string s, string t){
    char diff = 0;
    for(int i=0; i<s.size(); i++){
        diff^=s[i];
    }
    for(int i=0; i<t.size(); i++){
        diff^=t[i];
    }
    return diff;
}
int main(){
    string s = "abcd";
    string t = "abcde";
    cout<<"the difference is "<<difference(s,t);
    return 0;
}