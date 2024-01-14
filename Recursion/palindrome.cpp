#include<iostream>
using namespace std;
bool checkpalindrome(string str, int i, int j){
    //base case
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        checkpalindrome(str,i+1,j-1);
    }
}
int main(){
    string name = "malyalam";
    cout << name <<endl;
    bool ispalindrome = checkpalindrome(name,0,name.length()-1);
    if(ispalindrome){
        cout<<"it is palinderome"<<endl;
    }
    else{
        cout<<"it is not palindrome"<<endl;
    }
    return 0;
}