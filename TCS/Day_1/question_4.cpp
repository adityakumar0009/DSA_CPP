//Palindrome check
#include<iostream>
using namespace std;
bool is_palindrome(string s){
    int st = 0;
    int end = s.size()-1;
    while(st<end){
        if(s[st]!=s[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string s = "madam";
    if(is_palindrome(s)){
        cout<<"It is palindrome";
    }
    else{
        cout<<"It is not palindrome";
    }
    return 0;
}