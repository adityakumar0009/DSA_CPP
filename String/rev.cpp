#include<iostream>
using namespace std;
void rev(string& str){
    int s = 0;
    int e = str.length()-1;
    while(s<e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
}
int main(){
    string str = "aditya";
    rev(str);
    for(int i=0; i<str.length(); i++){
        cout<<str[i];
    }
    return 0;
}