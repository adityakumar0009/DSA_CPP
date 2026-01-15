#include<iostream>
using namespace std;
int strStr(string& haystack,string& needle){
    int m = haystack.size();
    int n = needle.size();
    if(m<n){
        return -1;
    }
    if(n==0){
        return 0;
    }
    for(int i=0; i<m; i++){
        if(haystack[i]==needle[0]){
            if(haystack.substr(i,n)==needle){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    string haystack = "sadbutsad";
    string needle = "sad";
    cout << "Find the Index of the First Occurrence in a String "<<strStr(haystack,needle);
    return 0;
}