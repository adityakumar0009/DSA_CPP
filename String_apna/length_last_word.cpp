#include<iostream>
using namespace std;
int length(string& s){
    int i = s.size()-1;
    int len = 0;
    while(i>=0 && s[i]==' '){
        i--;
    }
    while(i>=0 && s[i]!=' '){
        len++;
        i--;
    }
    return len;
}
int main(){
    string s = "Hello World";
    cout<<"length of the last word is "<<length(s);
    return 0;
}