#include<iostream>
using namespace std;
int first_occurance(string& haystack, string& needle){
    int m = haystack.size();
    int n = needle.size();
    if(n==0){
        return 0;
    }
    if(n>m){
        return -1;
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
    cout<<"first occurance is "<<first_occurance(haystack,needle);
    return 0;
}