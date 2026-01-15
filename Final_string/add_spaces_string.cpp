#include<iostream>
#include<vector>
using namespace std;
string add_spaces(string s,vector<int>& spaces){
    int m = s.size();
    int n = spaces.size();
    int j = 0;
    string result = "";
    for(int i=0; i<m; i++){
        if(j<n && i==spaces[j]){
            result+=" ";
            j++;
        }
        result+=s[i];
    }
    return result;
}
int main(){
    string s = "LeetcodeHelpsMeLearn";
    vector<int> spaces = {8, 13, 15};
    cout<<"The string after adding extra space is "<<add_spaces(s,spaces);
    return 0;
}