#include<iostream>
using namespace std;
string remove_space(string s){
    string ans;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            continue;
        }
        else{
            ans+=s[i];
        }
    }
    return ans;
}
int main(){
    string s = "Ad i tya";
    cout<<remove_space(s);
    return 0;
}