#include<iostream>
using namespace std;
char find_diff(string s,string t){
    char diff = 0;
    for(int i=0; i<s.size(); i++){
        diff^=s[i];
    }
    for(int j=0; j<t.length(); j++){
        diff^=t[j];
    }
    return diff;
}
int main(){
    string s = "abcd";
    string t = "abcde";
    cout<<"The difference between two string is "<<find_diff(s,t);
    return 0;
}