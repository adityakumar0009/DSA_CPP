#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<vector<string>> group_anagram(vector<string>& str){
    int n = str.size();
    vector<vector<string>> result;
    unordered_map<string,vector<string>> m;
    for(int i=0; i<n; i++){
        string temp = str[i];
        sort(temp.begin(),temp.end());
        m[temp].push_back(str[i]);
    }
    for(auto ans : m){
        result.push_back(ans.second);
    }
    return result;
}
int main(){
    vector<string> str = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = group_anagram(str);
    for (auto &group : ans)
    {
        for (auto &word : group)
        {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}