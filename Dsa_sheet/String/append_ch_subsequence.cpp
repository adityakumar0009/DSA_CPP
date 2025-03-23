#include<iostream>
using namespace std;
int append_ch_subsequence(string& s,string& t){
    int m = s.length();
    int n = t.length();
    int i =0;
    int j= 0;
    while(i<m && j<n){
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    return  n - j;
}
int main(){
    string s = "coaching";
    string t = "coding";
    cout<<"answer is -> "<<append_ch_subsequence(s,t);
    return 0;
}