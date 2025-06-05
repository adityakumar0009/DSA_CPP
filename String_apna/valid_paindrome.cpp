#include<iostream>
#include<vector>
using namespace std;
bool is_alpha_numeric(char ch){
    if((ch>='0'&& ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    }
    return false;
}
bool valid_palindrome(string s){
    int st = 0;
    int end = s.size()-1;
    while(st<=end){
        if(!is_alpha_numeric(s[st])){
            st++;
            continue;
        }
        if(!is_alpha_numeric(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string s = "A man, a plan, a canal: Panama";
    if (valid_palindrome(s))
    {
        cout << "The string is a valid palindrome." << endl;
    }
    else
    {
        cout << "The string is NOT a valid palindrome." << endl;
    }
    return 0;
}