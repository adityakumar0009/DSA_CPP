#include<iostream>
#include<climits>
using namespace std;
int str_int(string& s){
    int n = s.size();
    int i = 0;
    long result = 0;
    int sign = 1;
    //remove space
    while(i<n && s[i]==' '){
        i++;
    }
    //sign
    if(i<n && (s[i]=='-' || s[i]=='+')){
        if(s[i]=='-'){
            sign = -1;
        }
        else{
            sign = 1;
        }
    }
    //conversion
    while(i<n && isdigit(s[i])){
        int digit = s[i]-'0';
         // Check overflow before multiplying
        if(result > (INT_MAX - digit) / 10) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        result = result*10+digit;
        i++;
    }
    return (int)(result*sign);
}
int main(){
    string s = "42";
    cout<<"string to digit conversion is "<<str_int(s);
    return 0;
}