#include<iostream>
using namespace std;
long long separate_black_white(string s){
    long long n = s.size();
    long long black = 0;
    long long  swap = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            black++;
        }
        else{
            swap+=black;
        }
    }
    return swap;
}
int main(){
    string s = "101";
    cout<<"minimum no of swap require to separate black and white balls -> "<<separate_black_white(s);
    return 0;
}