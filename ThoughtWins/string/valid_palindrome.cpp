#include<iostream>
using namespace std;
bool is_alphanum(char ch){
    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    }
    return false;
}
bool is_palindrome(string s){
    int st = 0;
    int end = s.size()-1;
    while(st<=end){
        if(!is_alphanum(s[st])){
            st++;
            continue;
        }
        if(!is_alphanum(s[end])){
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
    string s = "A man, a plan, a canal: Panama";
    if(is_palindrome(s)){
        cout<<"It is a valid palindrome"<<endl;
    }
    else{
        cout<<"It is not a valid palindrome"<<endl;
    }
    return 0;
}