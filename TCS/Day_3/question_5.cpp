//Reverse word in sentence
#include<iostream>
#include<algorithm>
using namespace std;
void rev_sent(string s){
    reverse(s.begin(),s.end());
    int st = 0;
    for(int i=0; i<=s.size(); i++){
        if(i == s.length() || s[i]==' '){
            reverse(s.begin()+st, s.begin()+i);
            st = i + 1;
        }
    }
    for(int i=0; i<s.size(); i++){
        cout<<s[i];
    }
}
int main(){
    string s = "coding love i";
    rev_sent(s);
    return 0;
}