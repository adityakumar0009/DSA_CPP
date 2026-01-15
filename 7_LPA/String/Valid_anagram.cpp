#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool valid_anagram(string s,string t){
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
    string s = "anagram";
    string t = "nagaram";
    if(valid_anagram(s,t)){
        cout<<"It is a valid anagram "<<endl;
    }
    else{
        cout<<"It is not a valid anagram "<<endl;
    }
    return 0;
}