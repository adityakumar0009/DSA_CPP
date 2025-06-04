#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> remove_anagram(vector<string>& words){
    vector<string> result;
    string prev_word = "";
    for(int i=0; i<words.size(); i++){
        string temp = words[i];
        sort(temp.begin(),temp.end());
        if(temp!=prev_word){
            result.push_back(words[i]);
            prev_word = temp;
        }
    }
    return result;
}
int main(){
    vector<string> words = {"abba","baba","bbaa","cd","cd"};
    vector<string> ans = remove_anagram(words);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}