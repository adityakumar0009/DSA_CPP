#include<iostream>
using namespace std;
string integer_roman(int n){
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string result = "";
    for(int i=0; i<13; i++){
        while(n>=values[i]){
            result+=symbols[i];
            n-=values[i];
        }
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter the integer number -> ";
    cin>>n;
    cout<<"The roman number is -> "<<integer_roman(n);
    return 0;
}