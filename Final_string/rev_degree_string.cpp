#include<iostream>
using namespace std;
int rev_degree(string s){
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        int rev_pos = 26-(s[i]-'a');
        ans = ans + (i+1)*rev_pos;
    }
    return ans;
}
int main(){
    string s = "abc";
    cout<<"The rev degree of string is "<<rev_degree(s);
    return 0;
}