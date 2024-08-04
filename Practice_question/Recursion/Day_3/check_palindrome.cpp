#include<iostream>
using namespace std;
bool check_palindrome(string str, int i, int j){
    //base case
    if (i>j)
    {
       return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    return (str,i++,j--);
    
}
int main(){
    string name = "malayalam";
    cout<<endl;
    bool is_palindrome = check_palindrome(name,0,name.length()-1);
    if(is_palindrome){
        cout<<"it is palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
    return 0;
}