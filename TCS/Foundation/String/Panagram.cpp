#include<iostream>
#include<vector>
using namespace std;
bool is_pangram(string s){
    vector<bool>mark (26,false);
    int index;
    for(int i=0; i<s.size(); i++){
        if(islower(s[i])){
            index = s[i]-'a';
        }
        else if(isupper(s[i])){
            index = s[i] -'A';
        }
        else{
            continue;
        }
        mark[index] = true;
    }
    for(bool found : mark){
        if(!found){
            return false;
        }
    }
    return true;
}
int main(){
    string s = "The quick brown fox jumps over the lazy dog";
    if(is_pangram(s)){
        cout<<"It is a pangram string"<<endl;
    }
    else{
        cout<<"It is not a pangram string"<<endl;
    }
    return 0;
}