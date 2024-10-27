#include<iostream>
using namespace std;
bool check_equal(int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
bool checkIllusion(string s1, string s2){
    int freq[26] = {0};
    for(int i=0; i<26; i++){
        int index = s1[i]-'a';
        freq[index]++;
    }
    int windowsize = s1.length();
    for(int i=0; i<s2.length(); i++){
        int winidx = 0;
        int index = i;
        int winfreq[26] = {0};
        while(winidx<windowsize && index<s2.length()){
            winfreq[s2[index]-'a']++;
            winidx++;
            index++;
        }


        if (check_equal(freq,winfreq)){
            return true;
        }
    }
    return false;

}
int main(){
    string s1 = "abc";
    string s2 = "dabcfg";
    if(checkIllusion(s1,s2)){
        cout<<"it is a permutation staing"<<endl;
    }
    else{
        cout<<"it is not a permutation string"<<endl;
    }
    return 0;
}