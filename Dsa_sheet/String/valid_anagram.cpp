#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
bool is_anagram(string& s,string& t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }
    return false;
}
int main(){
    string s = "anagram";
    string t = "nagaram";
    if(is_anagram(s,t)){
        cout<<"it is a valid anagram";
    }
    else{
        cout<<"it is not a valid anagram";
    }
    return 0;
}