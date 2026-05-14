#include<iostream>
using namespace std;
int count_vowel(string s){
    int count = 0;
    for(int i=0; i<s.size(); i++){
        char ch = tolower(s[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='0' || ch=='u'){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);
    cout<<count_vowel(s);
    return 0;
}