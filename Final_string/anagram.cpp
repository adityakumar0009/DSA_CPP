#include<iostream>
#include<algorithm>
using namespace std;
bool is_anagram(string s,string t){
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
        cout<<"It is anagram string"<<endl;
    }
    else{
        cout<<"It is not a anagram string"<<endl;
    }
    return 0;
}