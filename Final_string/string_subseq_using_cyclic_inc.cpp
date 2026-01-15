#include<iostream>
using namespace std;
bool can_subsequences(string s1,string s2){
    int i = 0;
    int j = 0;
    while(i<s1.length() && j<s2.length()){
        if((s1[i]==s2[j]) || (s1[i]+1==s2[j]) || (s1[i]-25==s2[j])){
            j++;
        }
        i++;
    }
    if(j==s2.length()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s1 = "abc";
    string s2 = "ad";
    if(can_subsequences(s1,s2)){
        cout<<"It is a subsequence string"<<endl;
    }
    else{
        cout<<"It is not a subsequence string"<<endl;
    }
    return 0;
}