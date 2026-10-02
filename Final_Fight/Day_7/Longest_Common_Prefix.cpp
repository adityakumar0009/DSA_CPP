#include<iostream>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string res = "";
    for(int i=0; i<strs[0].size(); i++){
        for (int j = 0; j < strs.size(); j++) {
            string s = strs[j];
            if(s[i]!=strs[0][i]){
                return res; 
            }
        }
        res+=strs[0][i];
    }
    return res;
}
int main(){
    vector<string> strs = {"flower", "flow", "flight"};
    cout<<"Largest common prefix is "<<longestCommonPrefix(strs);
    return 0;
}