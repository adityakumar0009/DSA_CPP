#include<iostream>
#include<vector>
using namespace std;
string Longest_common_prefix(vector<string>& str){
    string ans = "";
    for(int i=0; i<str[0].size(); i++){
        for(int j=0; j<str.size(); j++){
            string s = str[j];
            if(s[i]!=str[0][i]){
                return ans;
            }
        }
        ans+=str[0][i];
    }
    return ans;
}
int main(){
    vector<string> str = {"flower", "flow", "flight"};
    cout<<"Longest common prefix is "<<Longest_common_prefix(str);
    return 0;
}