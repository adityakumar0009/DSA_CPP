#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int star_count = 0;
    int hash_count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='*'){
            star_count+=1;
        }
        else if(s[i]=='#'){
            hash_count+=1;
        }
    }
    cout << star_count - hash_count << endl;
    return 0;
}