#include<iostream>
using namespace std;
int str_str(string haystack,string needle){
    int m = haystack.size();
    int n = needle.size();
    if(n>m){
        return -1;
    }
    if(m==0){
        return 0;
    }
    for(int i=0; i<m; i++){
        if(haystack.substr(i,n)==needle){
            return i;
        }
    }
}
int main(){
    string haystack = "sadbutsad";
    string needle = "sad";
    cout << "Index of the First Occurrence in a String "<<str_str(haystack,needle);
    return 0;
}