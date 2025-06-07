#include<iostream>
using namespace std;
string reverse_letter(string& s){
    int st = 0;
    int end = s.size()-1;
    while(st<end){
        if(!isalpha(s[st])){
            st;
        }
        else if(!isalpha(s[end])){
            end--;
        }
        else{
            swap(s[st],s[end]);
            st++;
            end--;
        }
    }
    return s;
}
int main(){
    string s = "ab-cd";
    cout<<"reverse only letter "<<reverse_letter(s);
    return 0;
}