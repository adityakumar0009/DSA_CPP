#include<iostream>
using namespace std;
int count_character(string s){
    int n = s.size();
    int count = 0;
    for(int i=n-1; i>=0; i--){
        if(s[i]!=' '){
            count++;
        }
    }
    return count;
}
int main(){
    string s = "Hello World";
    cout<<"Total number of character is "<<count_character(s);
    return 0;
}