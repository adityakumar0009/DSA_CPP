#include<iostream>
using namespace std;
int index_first(string haystack,string needle){
    int m = haystack.size();
    int n = needle.size();
    if(n==0){
        return 0;
    }
    if(m<n){
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
    cout<<"Index of first occurance is "<<index_first(haystack,needle);
    return 0;
}