#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<vector<string>> group_anagram(vector<string>& strs){
    int n = strs.size();
    vector<vector<string>> result;
    unordered_map<string,vector<string>> m;
    for(int i=0; i<n; i++){
        string temp = strs[i];
        sort(temp.begin(),temp.end());
        m[temp].push_back(strs[i]);
    }
    for(auto ans : m){
        result.push_back(ans.second);
    }
    return result;
}
int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> answer = group_anagram(strs);
    for(const auto& group : answer){
        cout<<"[";
        for(const auto& word : group){
            cout<<word<<" ";
        }
        cout<<"]\n";
    }
    return 0;
}