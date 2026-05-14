#include<iostream>
using namespace std;
int main(){
    string s = "Aditya KumaR";
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i])){
            cout<<s[i]<<" ";
        }
    }
    return 0;
}