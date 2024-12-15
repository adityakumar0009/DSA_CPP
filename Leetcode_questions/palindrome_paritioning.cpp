#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isPalind(string s)
{
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s == s2;
}
void getAllParts(string s, vector<vector<string>> &ans, vector<string> &partitions)
{
    // base case
    if (s.size() == 0)
    {
        ans.push_back(partitions);
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        string parts = s.substr(0, i + 1);
        if (isPalind(parts))
        {
            partitions.push_back(parts);
            getAllParts(s.substr(i + 1), ans, partitions);
            partitions.pop_back();
        }
    }
}
vector<vector<string>> partition(string s)
{
    vector<vector<string>> ans;
    vector<string> partitions;
    getAllParts(s, ans, partitions);
    return ans;
}
;
int main(){
    string input = "aab";
    vector<vector<string>> result = partition(input);
    
    return 0;
}