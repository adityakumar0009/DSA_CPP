#include<iostream>
using namespace std;
string largest_odd(string num){
    for(int i=num.size()-1; i>=0; i--){
        if(num[i]%2!=0){
            return num.substr(0,i+1);
        }
    }
    return "";
}
int main(){
    string num = "52";
    cout<<"Largest odd number is "<<largest_odd(num);
    return 0;
}