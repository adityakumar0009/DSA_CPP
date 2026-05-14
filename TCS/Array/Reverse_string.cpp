#include<iostream>
#include<vector>
using namespace std;
string rev(string str){
    int st = 0;
    int end = str.size()-1;
    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    return str;
}
int main(){
    string str = "aditya";
    cout<<"Reverse string "<<rev(str);
    return 0;
}