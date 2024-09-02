#include<iostream>
using namespace std;
bool is_subsequence(string s, string t){
    int i =0;
    int j =0;
    while(i<s.length()&&j<t.length()){
        if(t[j] == s[i]){
            i++;
        }
        j++;
        if(i==s.length()){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){
    string s;
    cout<<"enter the string s->";
    cin>>s;
    string t;
    cout<<"enter the string t->";
    cin>>t;
    if(is_subsequence){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}