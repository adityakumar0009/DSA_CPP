#include<iostream>
using namespace std;
bool repeated_substring_pattern(string s){
    int n = s.size();
    for(int l=1; l<=n/2; l++){
        if(n%l==0){
            int times = n/l;
            string pattern = s.substr(0,l);
            string new_str = "";
            while(times--){
                new_str+=pattern;
            }
            if(new_str==s){
                return true;
            }
        }
    }
    return false;
}
int main(){
    string s = "abab";
    if(repeated_substring_pattern(s)){
        cout<<"It is repeated substring pattern";
    }
    else{
        cout<<"It is not repeated substring pattern";
    }
    return 0;
}