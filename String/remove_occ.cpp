#include<iostream>
using namespace std;
string occurance(string s, string part){
    while (s.length()>0 && s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
    
}
int main(){
    string s = "adabcfabc";
    string part = "abc";
    string result = occurance(s,part);
    cout<<result<<endl;
    return 0;
}