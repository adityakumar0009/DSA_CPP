#include<iostream>
using namespace std;
long long count_str(string& s,char& c){
    long long count = 0;
    long long substr = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==c){
            substr+=(1+count);
            count++;
        }
    }
    return substr;
}
int main(){
    string s = "abada";
    char c = 'a';
    cout<<"count of substr -> "<<count_str(s,c);
    return 0;
}