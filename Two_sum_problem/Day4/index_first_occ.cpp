#include<iostream>
using namespace std;
int strStr(string hystack,string needle){
    int n = hystack.size();
    int m = needle.size();
    if(m==0){
        return 0;
    }
    if(n<m){
        return -1;
    }
    for(int i=0; i<n; i++){
        if(hystack.substr(i,m)==needle){
            return i;
        }
    }
    return -1;
}
int main(){
    string haystack = "sadbutsad";
    string needle = "sad";
    cout << "The index of the first occurrence of needle in haystack "<<strStr(haystack,needle);
    return 0;
}