#include<iostream>
#include<vector>
using namespace std;
string add_space(string& s, vector<int>& spaces){
    int n = s.length();
    int m = spaces.size();
    int j = 0;
    string result = "";
    for(int i=0; i<n; i++){
        if(j<m && i==spaces[j]){
            result+=" ";
            j++;
        }
        result+=s[i];
    }
    return result;
}
int main(){
    string s = "LeetcodeHelpsMeLearn";
    vector<int> spaces = {8,13,15};
    cout<<"string after adding spaces is -> "<<add_space(s,spaces);
    return 0;
}