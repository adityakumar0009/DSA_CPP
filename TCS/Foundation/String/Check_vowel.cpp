#include<iostream>
using namespace std;
int count_vowel(string s){
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' ||s[i]=='E' ||
        s[i]=='I' || s[i]=='O' || s[i]== 'U'){
            count = count+1;
        }
    }
    return count;
}
int main(){
    string s = "aditya";
    cout<<"Total number of vowel is "<<count_vowel(s);
    return 0;
}