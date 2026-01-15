#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<vector<string>> group_anagram(vector<string>& strs){
    vector<vector<string>> result;
    unordered_map<string,vector<string>> m;
    int n = strs.size();
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
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = group_anagram(strs);
    for (auto &group : ans)
    {
        cout << "[ ";
        for (auto &word : group)
        {
            cout << word << " ";
        }
        cout << "]\n";
    }
    cout<<endl;
    return 0;
}