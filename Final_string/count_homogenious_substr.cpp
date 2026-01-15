#include<iostream>
using namespace std;
int count_homogenious(string s){
    int length = 0;
    int result = 0;
    const int MOD = 1e9 + 7;
    int n = s.size();
    for(int i=0; i<n; i++){
        if(i>0 && s[i]==s[i-1]){
            length++;
        }
        else{
            length = 1;
        }
        result = (result+length)%MOD;
    }
    return result;
}
int main(){
    string s = "abbcccaa";
    cout<<"The number of homogenious string is "<<count_homogenious(s);
    return 0;
}