#include<iostream>
using namespace std;
string toLowerCase(string s) {
    string str ="";
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        str.push_back(tolower(ch));
    }
    return str;
}
int main(){
    string s = "HeLlo";
    cout<<"The lowercase string is "<<toLowerCase(s);
    return 0;
}