#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool is_palind(string s){
    string s2 = s;
    reverse(s2.begin(),s2.end());
    return s==s2;
}
void get_all_parts(string s,vector<vector<string>>& ans,vector<string>& partitions){
    if(s.empty()){ // base case: string is finished
        ans.push_back(partitions);
        return;
    }
    for(int i=0; i<s.size(); i++){
        string part = s.substr(0,i+1);
        if(is_palind(part)){
            partitions.push_back(part);
            get_all_parts(s.substr(i+1),ans,partitions);
            partitions.pop_back();
        }

    }
}
vector<vector<string>> partition(string s){
    vector<vector<string>> ans;
    vector<string> partitions;
    get_all_parts(s,ans,partitions);
    return ans;
}
int main(){
    string s = "aab";
    vector<vector<string>> result = partition(s);
    for(int i=0; i<result.size(); i++){
        cout<<"[";
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"]\n";
    }
    return 0;
}