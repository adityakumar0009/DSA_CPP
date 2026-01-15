#include<iostream>
#include<vector>
using namespace std;
bool illusion(string s1,string s2){
    vector<int> freq1(26,0);
    vector<int> freq2(26,0);
    for(int i=0; i<s1.size(); i++){
        char ch = s1[i];
        int index = ch-'a';
        freq1[index]++;
    }
    int wind_freq = s1.size();
    for(int i=0; i<wind_freq; i++){
        char ch = s2[i];
        int index = ch-'a';
        freq2[index]++;
    }
    if(freq1==freq2){
        return true;
    }
    for(int i=wind_freq; i<s2.size(); i++){
        freq2[s2[i]-'a']++;
        freq2[s2[i-wind_freq]-'a']--;
        if(freq1==freq2){
            return true;
        }
    }
    return false;
}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    if(illusion(s1,s2)){
        cout<<"It is a permutation string "<<endl;
    }
    else{
        cout<<"It is not a permutation string "<<endl;
    }
    return 0;
}