#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
string longest_common_prefix(vector<string>& str){
    string ans;
    sort(str.begin(),str.end());
    string first = str[0];
    string last = str[str.size()-1];
    for(int i=0; i<str.size(); i++){
        if(first[i]!=last[i]){
            break;
        }
        ans+=first[i];
    }
    return ans;
}
int main(){
    vector<string> str = {"flower", "flow", "flight"};
    cout << "The longest common prefix is " << longest_common_prefix(str);
    return 0;
}