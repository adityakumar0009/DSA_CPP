#include<iostream>
#include<algorithm>
using namespace std;
string rev_word(string s){
    string ans = "";
    int n = s.size();
    reverse(s.begin(),s.end());
    for(int i=0; i<s.size(); i++){
        string word = "";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans+=" "+word;
        }
    }
    return ans.substr(1);
}
int main(){
    string s = "the sky is blue";
    cout<<"The reverse word is "<<rev_word(s);
    return 0;
}