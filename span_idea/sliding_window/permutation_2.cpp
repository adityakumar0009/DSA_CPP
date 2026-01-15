#include<iostream>
#include<vector>
using namespace std;
bool check_illusion(string s1,string s2){
    vector<int> freq1(26,0);
    vector<int> freq2(26,0);
    for(int i=0; i<s1.size(); i++){
        char ch = s1[i];
        int index = ch-'a';
        freq1[index]++;
    }
    int win_freq = s1.length();
    for(int i=0; i<win_freq; i++){
        char ch = s2[i];
        int index = ch-'a';
        freq2[index]++;
    }
    if(freq1==freq2){
        return true;
    }
    //slide
    for(int i=win_freq; i<s2.size(); i++){
        //add new one
        freq2[s2[i]-'a']++;
        // remove old one
        freq2[s2[i-win_freq]-'a']--;
        if(freq1==freq2){
            return true;
        }
    }
    return false;
}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    if(check_illusion(s1,s2)){
        cout<<"It is permutation string";
    }
    else{
        cout<<"It is not a permutation string";
    }
    return 0;
}