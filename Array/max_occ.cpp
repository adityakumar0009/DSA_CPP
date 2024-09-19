#include<iostream>
using namespace std;
char getmaxichar(string s){
    int arr[26] = {0};
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        //lower case
        int number = 0;
        if(ch>='a' && ch<='z'){
            number = ch-'a';
        }
        //uppercase
        else{
            number = ch-'A';
        }
        arr[number]++;
    }
    int maxi = -1,ans = 0;
    for (int i=0; i<26; i++){
        if(maxi < s[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a'+ans;
    return finalans;
}
int main(){
    string s;
    cin>>s;
    cout<<getmaxichar(s)<<endl;
}