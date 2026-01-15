#include<iostream>
#include<vector>
using namespace std;
string longest_common(vector<string>& str){
    string strs = "";
    for(int i=0; i<str[0].size(); i++){
        for(int j=0; j<str.size(); j++){
            string s = str[j];
            if(s[i]!=str[0][i]){
                return strs;
            }
        }
        strs+=str[0][i];
    }
    return strs;
}
int main(){
    vector<string> str = {"flower", "flow", "flight"};
    cout<<"The longest common prefix is "<<longest_common(str);
    return 0;
}