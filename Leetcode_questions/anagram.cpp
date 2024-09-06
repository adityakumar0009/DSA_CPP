#include<iostream>
#include<algorithm>
using namespace std;
bool is_anagram(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s = "monkey";
    string t = "keymon";
    if(is_anagram(s,t)){
        cout<<"it is anagram"<<endl;
    }
    else{
        cout<<"not a anagram"<<endl;
    }
    return 0;
}