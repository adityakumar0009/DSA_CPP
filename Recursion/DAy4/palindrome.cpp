#include<iostream>
using namespace std;
bool ispalindrome(string str, int i,int j){
    //base case
    if(i>=j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    //recursive call
    else{
        return ispalindrome(str,i+1,j-1);
    }
}
int main(){
    string name = "malayalam";
    cout<<endl;
    bool palindrome = ispalindrome(name,0,name.length()-1);
    if(palindrome){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
}