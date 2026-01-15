#include<iostream>
using namespace std;
bool check_equal(int a[26],int b[26]){
    for(int i=0; i<26; i++){
        if(a[i]!=b[i]){
            return true;
        }
    }
    return false;
}
bool check_inclusion(string s1,string s2){
    int freq[26] = {0};
    for(int i=0; i<s1.length(); i++){
        int index = s1[i]-'a';
        freq[index]++;
    }

    int wid_len = s1.length();
    for(int i=0; i<s2.length(); i++){
        int index = i;
        int winidx = 0;
        int winfreq[26] = {0};
        while(winidx<wid_len && index<s2.length()){
            winfreq[s2[index]-'a']++;
            winidx++;
            index++;
        }
        if(check_equal(freq,winfreq)){
            return true;
        }
    }
    return false;
}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    if(check_inclusion(s1,s2)){
        cout<<"It is a permutataion string"<<endl;
    }
    else{
        cout<<"It is not a permutation string "<<endl;
    }
    return 0;
}