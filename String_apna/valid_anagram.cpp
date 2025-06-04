#include<iostream>
#include<algorithm>
using namespace std;
bool is_Anagram(string& s,string& t){
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
    if(is_Anagram(s,t)){
        cout<<"it is a valid anagram"<<endl;
    }
    else{
        cout<<"it is not a valid anagram"<<endl;
    }
    return 0;
}