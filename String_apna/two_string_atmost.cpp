#include<iostream>
using namespace std;
bool checkEquivalent(string word1,string word2){
    int n = word1.size();
    int freq[26] = {0};
    for(int i=0; i<n; i++){
        freq[word1[i]-'a']++;
        freq[word2[i]-'a']--;
    }
    for(int i=0; i<26; i++){
        if(abs(freq[i])>3){
            return false;
        }
    }
    return true;
}
int main(){
    string word1 = "aaaa";
    string word2 = "bccb";
    if(checkEquivalent(word1,word2)){
        cout << "Two Strings are Almost Equivalent"<<endl;
    }
    else{
        cout << "Two Strings are not Almost Equivalent";
    }
    return 0;
}