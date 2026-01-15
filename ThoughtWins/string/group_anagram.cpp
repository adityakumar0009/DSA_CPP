#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<vector<string>> groupAnagram(vector<string>& str){
    vector<vector<string>> result;
    unordered_map<string,vector<string>> m;
    for(int i=0; i<str.size(); i++){
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
     vector<vector<string>> grouped = groupAnagram(str);

    // Print result
    for (auto& group : grouped) {
        cout << "[ ";
        for (auto& word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}