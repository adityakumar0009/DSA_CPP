#include<iostream>
#include<climits>
using namespace std;
bool solve(string& s,int i,int j){
    if(i>=j){
        return true;
    }
    if(s[i]==s[j]){
        return solve(s,i+1,j-1);
    }
    return false;
}
string longest_palindrom(string& s){
    int n = s.size();
    int max_len = INT_MIN;
    int st = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(solve(s,i,j)==true){
                if(j-i+1>max_len){
                    max_len = j-i+1;
                    st = i;
                }
            }
        }
    }
    return s.substr(st,max_len);
}
int main(){
    string s = "babad";
    cout<<"Longest palindrome substring is "<<longest_palindrom(s);
    return 0;
}