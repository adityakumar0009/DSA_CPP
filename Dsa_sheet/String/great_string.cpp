#include<iostream>
using namespace std;
string make_great(string& s){
    string result = "";
    for(int i=0; i<s.size(); i++){
        if(!result.empty() && (result.back()-32 == s[i] || result.back()+32 == s[i])){
            result.pop_back();
        }
        else{
            result.push_back(s[i]);
        }
    }
    return result;
}
int main(){
    string s = "leEeetcode";
    cout<<"great_string is-> "<<make_great(s);
    return 0;
}