#include<iostream>
#include<vector>
using namespace std;
bool is_pangram(string s){
    vector<int> ans(26,0);
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        int index = ch-'a';
        ans[index]++;
    }
    for(int &count : ans){
        if(count==0){
            return false;
        }
    }
    return true;
}
int main(){
    string s = "thequickbrownfoxjumpsoverthelazydog";
    if(is_pangram(s)){
        cout<<"It is a pangram string"<<endl;
    }
    else{
        cout<<"It is not a pangram";
    }
    return 0;
}