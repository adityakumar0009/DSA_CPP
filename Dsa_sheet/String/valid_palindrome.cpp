#include<iostream>
using namespace std;
bool alpha_num(char ch){
    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    }
    return false;
}
bool is_palindrome(string s){
    int st = 0;
    int end = s.size()-1;
    while(st<=end){
        if(!alpha_num(s[st])){
            st++;
            continue;
        }
        if(!alpha_num(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string s  = "A man, a plan, a canal: Panama";
    if(is_palindrome(s)){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"it is not a plaindrome";
    }
    return 0;
}