#include<iostream>
#include<vector>
using namespace std;
bool is_equivalent(vector<string>& str1,vector<string>& str2){
    string result1 = "";
    for(int i=0; i<str1.size(); i++){
        result1+=str1[i];
    }
    string result2 = "";
    for(int j=0; j<str2.size(); j++){
        result2+=str2[j];
    }
    if(result1==result2){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    vector<string> str1 = {};
    vector<string> str2 = {};
    if(is_equivalent(str1,str2)){
        cout<<"It is equivalent string"<<endl;
    }
    else{
        cout<<"It is not an equivalent string"<<endl;
    }
    return 0;
}