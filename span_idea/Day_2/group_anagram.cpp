#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<vector<string>> group_anagram(vector<string>& strs){
    int n = strs.size();
    vector<vector<string>> result;
    unordered_map<string,vector<string>> mp;
    for(int i=0; i<n; i++){
        string temp = strs[i];
        sort(temp.begin(),temp.end());
        mp[temp].push_back(strs[i]);
    }
    for(auto& it : mp){
        result.push_back(it.second);
    }
    return result;
}
int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = group_anagram(strs);
    for(int i=0; i<ans.size(); i++){
        cout<<"[";
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"]\n";
    }
    return 0;
}