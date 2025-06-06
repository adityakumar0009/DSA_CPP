#include<iostream>
using namespace std;
bool palindrome(string s){
    int st = 0;
    int end = s.size()-1;
    while(st<=end){
        if(tolower(s[st])==tolower(s[end])){
            return true;
        }
        st++;
        end--;
    }
    return false;
}
int main(){
    string s = "RAdar";
    if(palindrome(s)){
        cout<<"it is a palindrome string"<<endl;
    }
    else{
        cout<<"it is not a palindrome string"<<endl;
    }
    return 0;
}