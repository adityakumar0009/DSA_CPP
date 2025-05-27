#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> remove_anagram(vector<string>& str){
    int n = str.size();
    vector<string> result;
    string prev_word = "";
    for(int i=0; i<n; i++){
        string temp = str[i];
        sort(temp.begin(),temp.end());
        if(prev_word!=temp){
            result.push_back(str[i]);
            prev_word = temp;
        }
    }
    return result;
}
int main(){
    vector<string> str = {"abba", "baba", "bbaa", "cd", "cd"};
    vector<string> ans = remove_anagram(str);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}