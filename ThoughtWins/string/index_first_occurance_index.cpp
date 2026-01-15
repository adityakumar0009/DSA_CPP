#include<iostream>
using namespace std;
int substring(string haystack,string needle){
    int n = haystack.size();
    int m = needle.size();
    if(m==0){
        return 0;
    }
    if(n<m){
        return -1;
    }
    for(int i=0; i<n; i++){
        if(haystack[i]==needle[0]){
            if(haystack.substr(i,m)==needle){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    string haystack = "sadbutsad";
    string needle = "sad";
    cout<<"The first occurance index is "<<substring(haystack,needle);
    return 0;
}