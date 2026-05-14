//check anagram
#include<iostream>
using namespace std;
bool is_anagram(string s1,string s2){
    int count[26] = {0};
    for(int i=0; i<s1.length(); i++){
        count[i-'a']++;
    }
    for(int j=0; j<s1.length(); j++){
        count[j-'a']--;
    }
    for(int i=0; i<26; i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1 = "listen";
    string s2 = "silent";
    if(is_anagram(s1,s2)){
        cout<<"It is anagram string"<<endl;
    }
    else{
        cout<<"It is not a anagram string"<<endl;
    }
    return 0;
}