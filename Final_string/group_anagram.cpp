#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<vector<string>> group_anagram(vector<string>& strs){
    vector<vector<string>> ans;
    unordered_map<string,vector<string>> m;
    for(int i=0; i<strs.size(); i++){
        string temp = strs[i];
        sort(temp.begin(),temp.end());
        m[temp].push_back(strs[i]);
    }
    for(auto& result : m){
        ans.push_back(result.second);
    }
    return ans;
}
int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> group = group_anagram(strs);
    for (int i = 0; i < group.size(); i++) {
    cout << "[ ";
    for (int j = 0; j < group[i].size(); j++) {
        cout << group[i][j] << " ";
    }
    cout << "]\n";
    }
    return 0;
}