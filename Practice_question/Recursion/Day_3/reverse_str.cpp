#include<iostream>
using namespace std;

void reverse(string& str, int i, int j){
    // base case
    if(i >= j){
        return;
    }
    // swap characters
    swap(str[i], str[j]);
    // recursive call
    reverse(str, i + 1, j - 1);
}

int main(){
    string name = "aditya";
    reverse(name, 0, name.length() - 1);
    cout << name;
    return 0;
}
