#include<iostream>
using namespace std;
bool check_equivalent(string word1,string word2){
    int n = word1.size();
    int freq[26] = {0};
    for(int i=0; i<n; i++){
        freq[word1[i]-'a']++;
        freq[word2[i]-'a']--;
    }
    for(int i=0; i<n; i++){
        if(freq[i]>3){
            return false;
        }
    }
    return true;
}
int main(){
    string word1 = "aaaa";
    string word2 = "bccb";
    if(check_equivalent(word1,word2)){
        cout<<"It is equivalent string"<<endl;
    }
    else{
        cout<<"It is not a equivalent string"<<endl;
    }

    return 0;
}