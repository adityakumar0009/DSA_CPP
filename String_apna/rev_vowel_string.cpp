#include<iostream>
using namespace std;
bool is_vowel(char ch){
    if(ch=='a' || ch=='e' || ch =='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' ||ch=='I' || ch == 'O' || ch =='U'){
        return true;
    }
    return false;
}
string rev_vowel(string s){
    int st = 0;
    int end = s.size()-1;
    while(st<end){
        if(!is_vowel(s[st])){
            st++;
        }
        else if(!is_vowel(s[end])){
            end--;
        }
        else{
            swap(s[st],s[end]);
            st++;
            end--;
        }
    }
    return s;
}
int main(){
    string s = "Aditya";
    cout<<"reverse vowel string is "<<rev_vowel(s);
    return 0;
}