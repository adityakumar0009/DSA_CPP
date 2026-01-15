#include<iostream>
#include<algorithm>
using namespace std;
bool valid_anagram(string& s1,string& s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s1 = "anagram";
    string s2 = "anagram";
    if(valid_anagram(s1,s2)){
        cout<<"It is a valid anagram"<<endl;
    }
    else{
        cout<<"It is not a valid anagram"<<endl;
    }
    return 0;
}