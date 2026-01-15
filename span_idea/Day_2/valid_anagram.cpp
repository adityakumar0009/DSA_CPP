#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool is_anagram(string s,string t){
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
    if (is_anagram(s, t))
    {
        cout<<"It is an anagram string"<<endl;
    }
    else{
        cout<<"It is not an anagram string"<<endl;
    }
    return 0;
}