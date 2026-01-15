#include<iostream>
using namespace std;
bool check_equal(int a[26],int b[26]){
    for(int i=0; i<26; i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
bool checkIllusion(string& s1,string& s2){
    int freq[26] = {0};
    for(int i=0; i<s1.length(); i++){
        int index = s1[i]-'a';
        freq[index]++;
    }
    int windsize = s1.length();
    for(int i=0; i<s2.length(); i++){
        int winidx = 0;
        int index = i;
        int windowfreq[26] = {0};
        while(winidx<windsize && index<s2.length()){
            windowfreq[s2[index]-'a']++;
            winidx++;
            index++;
        }
        if(check_equal(freq,windowfreq)){
            return true;
        }
    }
    return false;
}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    if(checkIllusion(s1,s2)){
        cout<<"It is string permutation";
    }
    else{
        cout<<"It is not a string permuatation";
    }
    return 0;
}