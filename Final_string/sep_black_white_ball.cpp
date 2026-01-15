#include<iostream>
using namespace std;
long long min_step(string s){
    // int n = s.length();
    // long black = 0;
    // long swap = 0;
    // for(int i=0; i<s.length(); i++){
    //     if(s[i]=='1'){
    //         black++;
    //     }
    //     else{
    //         swap+=black;
    //     }
    // }
    // return swap;
    int st = 0;
    int end = s.size()-1;
    long long count = 0;
    while(st<=end){
        if(s[st]!='0'){
            st++;
        }
        else if(s[end]!='1'){
            end--;
        }
        else{
            count++;
            st++;
            end--;
        }
    }
    return count;
}
int main(){
    string s = "101";
    cout<<"The min step to swap black and white ball is "<<min_step(s);
    return 0;
}