#include<iostream>
#include<algorithm>
using namespace std;
string rev_only_str(string s){
    int st = 0;
    int end = s.size()-1;
    while(st<end){
        if(!isalpha(s[st])){
            st++;
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
}
int main(){
    string s = "ab-ab";
    cout<<"Reverse only string is "<<rev_only_str(s);
    return 0;
}