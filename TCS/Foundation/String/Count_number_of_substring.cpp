#include<iostream>
using namespace std;
int main(){
    string s = "abcd";
    int n = s.size();
    int length = n*(n-1)/2;
    cout<<"Number of Substring "<<length;
    return 0;
}