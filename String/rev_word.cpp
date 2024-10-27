#include<iostream>
#include<algorithm>
using namespace std;
string rev_word(string s){
    string ans = "";
    int n = s.length();
    reverse(s.begin(),s.end());
    for(int i=0; i<n; i++){
        string word = "";
        while (i<n && s[i]!=' ')
        {
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
    string s = "my name is aditya";
    string result = rev_word(s);
    cout<<result;
    return 0;
}