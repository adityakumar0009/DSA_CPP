#include<iostream>
using namespace std;
char to_lower(char ch){
    if(ch>'a' && ch<'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int main(){
    char ch;
    cin>>ch;
    cout<<to_lower(ch);
    return 0;
}