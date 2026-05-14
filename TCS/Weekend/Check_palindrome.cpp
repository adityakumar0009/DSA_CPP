#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int st = 0;
    int end = s.size()-1;
    bool flag = true;
    while(st < end){
        if(s[st] != s[end]){
            flag = false;
            break;
        }
        st++;
        end--;
    }
    if(flag)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
}