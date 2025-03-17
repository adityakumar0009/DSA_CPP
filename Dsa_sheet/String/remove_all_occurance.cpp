#include<iostream>
using namespace std;
string remove_all_occurance(string s , string part){
    //find part s in string
    while(s.length()!=0 && s.find(part)<s.length()){
        //delete part in s
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    cout<<"after remove all occurance ans is -> "<<remove_all_occurance(s,part);
    return 0;
}