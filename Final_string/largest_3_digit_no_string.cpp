#include<iostream>
using namespace std;
string largest_three_digit_number(string s){
    string result = "";
    int n = s.size();
    for(int i=2; i<n; i++){
        if(s[i-2]==s[i-1] && s[i-1]==s[i]){
            string largest = s.substr(i-2,3);
            result = max(result,largest);
        }
    }
    return result;
}
int main(){
    string s = "6777133339";
    cout<<"The largest three digit number in string is "<<largest_three_digit_number(s);
    return 0;
}