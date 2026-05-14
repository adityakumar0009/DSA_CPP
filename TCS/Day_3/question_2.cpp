// Find First Non-Repeating Character
#include<iostream>
using namespace std;
void first_non_repeat(string s){
    int freq[26] = {0};
    for(int i=0; i<s.length(); i++){
        freq[s[i]-'a']++;
    }
    for(int i=0; i<s.length(); i++){
        if(freq[s[i]-'a']==1){
            cout<<"First non repeating char is "<<s[i];
            break;
        }
    }
}
int main(){
    string s = "aabbcde";
    first_non_repeat(s);
    return 0;
}