#include<iostream>
using namespace std;
bool is_palindrome(string s){
    int st = 0;
    int end = s.size()-1;
    while(st<end){
        if(s[st]==s[end]){
            return true;
        }
        st++;
        end--;
    }
    return false;
}
int main(){
    string s = "malayalam";
    if(is_palindrome(s)){
        cout<<"It is a palindrome string"<<endl;
    }
    else{
        cout<<"It is not a palindrome string"<<endl;
    }
    return 0;
}