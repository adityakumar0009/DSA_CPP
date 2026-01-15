#include<iostream>
#include<vector>
using namespace std;
bool two_string_eq(vector<string>& str1,vector<string>& str2){
    string result1 = "";
    for(int i=0; i<str1.size(); i++){
        result1+=str1[i];
    } 
    string result2 = "";
    for(int i=0; i<str2.size(); i++){
        result2+=str2[i];
    }
    if(result1==result2){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    vector<string> str1 = {"ab","c"};
    vector<string> str2 = {"c","ab"};
    if(two_string_eq(str1,str2)){
        cout<<"It is equivalent string"<<endl;
    }
    else{
        cout<<"It is not evuivalent string"<<endl;
    }
    return 0;
}