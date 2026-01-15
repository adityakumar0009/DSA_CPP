#include<iostream>
using namespace std;
bool repeated_substring_pattern(string s){
    int n = s.size();
    for(int l=1; l<=n/2; l++){
        if(n%l==0){
            int time = n/l;
            string pattern = s.substr(0,l);
            string new_pat = "";
            while(time--){
                new_pat+=pattern;
            }
            if(new_pat==s){
                return true;
            }
        }
    }
    return false;
}
int main(){
    string s = "abab";
    if(repeated_substring_pattern(s)){
        cout<<"It is repeated substring pattern"<<endl;
    }
    else{
        cout<<"It is not a repeated substring pattren"<<endl;
    }
    return 0;
}