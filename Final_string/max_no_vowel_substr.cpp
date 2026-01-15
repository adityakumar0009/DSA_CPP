#include<iostream>
using namespace std;
bool is_vowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        return true;
    }
    return false;
}
int max_vowel(string s,int k){
    int n = s.size();
    int i = 0;
    int j = 0;
    int max_vowel =0 ;
    int count = 0;
    while(j<n){
        if(is_vowel(s[j])){
            count++;
        }
        if(j-i+1==k){
            max_vowel = max(max_vowel,count);
            if(is_vowel(s[i])){
                count--;
            }
            i++;
        }
        j++;
    }
    return max_vowel;
}
int main(){
    string s = "abciiidef";
    int k = 3; 
    cout<<"Maximum number of vowel is "<<max_vowel(s,k);
    return 0;
}