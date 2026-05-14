//check palindrome
#include<iostream>
using namespace std;
bool is_palindrome(string& s){
    int st = 0;
    int end = s.length()-1;
    while(st<end){
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string s = "Malayalam";
    if(is_palindrome(s)){
        cout<<"It is a palindrome number"<<endl;
    }
    else{
        cout<<"It is not a palindrome number"<<endl;
    }
    return 0;
}