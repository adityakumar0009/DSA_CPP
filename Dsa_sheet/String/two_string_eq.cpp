#include<iostream>
#include<vector>
using namespace std;
bool two_string(vector<string>& word1,vector<string>& word2){
    string result1 = "";
    for(int i=0; i<word1.size(); i++){
        result1+=word1[i];
    }
    string result2 = "";
    for(int i=0; i<word2.size(); i++){
        result2+=word2[i];
    }
    if(result1==result2){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};
    if(two_string(word1,word2)){
        cout<<"two string are equivalent";
    }
    else{
        cout<<"two string are not equivalent";
    }
    return 0;
}