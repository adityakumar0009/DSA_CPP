#include<iostream>
using namespace std;
int main(){
    int year = 2024;
    if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ){
        cout<<"Leap Year";
    } else {
        cout<<"Not a Leap Year";
    }
    return 0;
}