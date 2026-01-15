#include<iostream>
using namespace std;
bool repeated_substr(string s){
    int n = s.size();
    for(int l=1; l<=n/2; l++){
        if(n%l==0){
            int times = n/l;
            string pattern = s.substr(0,l);
            string new_pat = "";
            while(times--){
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
    if(repeated_substr(s)){
        cout<<"It is repeated substr pattern "<<endl;
    }
    else{
        cout<<"It is not repeated substr pattern "<<endl;
    }
    return 0;
}