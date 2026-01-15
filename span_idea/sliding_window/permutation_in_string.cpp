#include<iostream>
using namespace std;
bool is_same(int freq1[26],int freq2[26]){
    for(int i=0; i<26; i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
bool check_inclusion(string s1,string s2){
    int freq[26] = {0};
    for(int i=0; i<s1.length(); i++){
        char ch = s1[i];
        int index = ch-'a';
        freq[index]++;
    }
    int win_size = s1.size();
    for(int i=0; i<s2.length(); i++){
        int windidx=0;
        int idx = i;
        int win_freq[26] = {0};
        while(windidx<win_size && idx<s2.length()){
            win_freq[s2[idx]-'a']++;
            windidx++;
            idx++;
        }
        if(is_same(freq,win_freq)){
            return true;
        }
    }
    return false;
}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    if(check_inclusion(s1,s2)){
        cout<<"IT is a permutation string";
    }
    else{
        cout<<"It is not a perutation string";
    }
    return 0;
}