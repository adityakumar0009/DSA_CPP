#include<iostream>
using namespace std;
void reverse(string& s){
    int st = 0;
    int end = s.size()-1;
    while(st<end){
        swap(s[st],s[end]);
        st++;
        end--;
    }
}
int main(){
    string s = "hello";
    reverse(s);
    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }
    return 0;
}