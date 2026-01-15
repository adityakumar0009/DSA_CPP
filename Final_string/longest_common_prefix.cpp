#include<iostream>
#include<vector>
using namespace std;
string longest_commom_prefix(vector<string>& str){
    string res = "";
    for(int i=0; i<str[0].size(); i++){
        for(int j=0; j<str.size(); j++){
            string s = str[j];
            if(s[i]!=str[0][i]){
                return res;
            }
        }
        res+=str[0][i];
    }
    return res;
}
int main(){
    vector<string> str = {"flower", "flow", "flight"};
    cout<<"The longest common prefix is "<<longest_commom_prefix(str);
    return 0;
}