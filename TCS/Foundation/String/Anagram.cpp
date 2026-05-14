#include<iostream>
#include<algorithm>
using namespace std;
bool is_anagram(string s1,string s2){
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
    string s1 = "aditya";
    string s2 = "adtiya";
    if(is_anagram(s1,s2)){
        cout<<"It is an anagram string"<<endl;
    }
    else{
        cout<<"It is not an anagram string";
    }
    return 0;
}