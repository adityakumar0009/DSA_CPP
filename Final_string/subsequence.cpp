#include<iostream>
using namespace std;
bool is_subsequence(string s,string t){
    int i = 0;
    int j = 0;
    while(i<s.length() && j<t.length()){
        if(s[i]==t[j]){
            i++;
        }
        j++;
    }
    if(i==s.length()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s = "abc";
    string t = "ahbgdc";
    if(is_subsequence(s,t)){
        cout<<"It is a subsequence string"<<endl;
    }
    else{
        cout<<"It is not a subsequence string"<<endl;
    }
    return 0;
}