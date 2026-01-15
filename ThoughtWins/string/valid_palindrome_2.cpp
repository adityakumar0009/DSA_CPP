#include<iostream>
using namespace std;
bool is_palindrome(string& s, int left,int right){
     while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
bool valid_palindrome(string s){
    int st = 0;
    int end = s.size()-1;
    while(st<=end){
        if(s[st]!=s[end]){
            return is_palindrome(s,st+1,end) || is_palindrome(s,st,end-1);
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string s = "abca";
    if(valid_palindrome(s)){
        cout<<"It is a valid palindrome"<<endl;
    }
    else{
        cout<<"It is not a valid palindrome"<<endl;
    }
    return 0;
}