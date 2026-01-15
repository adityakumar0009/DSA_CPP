#include<iostream>
#include<vector>
using namespace std;
string longest_common_prefic(vector<string>& strs){
    string result = "";
    for(int i=0; i<strs[0].size(); i++){
        for(int j=0; j<strs.size(); j++){
            string s = strs[j];
            if(s[i]!=strs[0][i]){
                return result;
            }
        }
        result += strs[0][i];
    }
    return result;
}
int main(){
    vector<string> strs = {"flower", "flow", "flight"};
    cout<<"The longest common prefix is "<<longest_common_prefic(strs);
    return 0;
}