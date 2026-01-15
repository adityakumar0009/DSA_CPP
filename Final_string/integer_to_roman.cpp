#include<iostream>
using namespace std;
string integer_to_roman(int num){
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string result = "";
    for(int i=0; i<13; i++){
        while(num>=values[i]){
            result+=symbols[i];
            num-=values[i];
        }
    }
    return result;
}
int main(){
    int num = 8;
    cout<<"The integer to roman conversion is "<<integer_to_roman(num);
    return 0;
}