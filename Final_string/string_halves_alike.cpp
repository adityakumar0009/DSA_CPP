#include<iostream>
using namespace std;
bool halves_alike(string s){
    int n = s.size();
    int i = 0;
    int mid = n/2;
    int j = mid;
    int countL = 0;
    int countR = 0;
    while(i<n/2 && j<n){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            countL++;
        }
        if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U'){
            countR++;
        }
        i++;
        j++;
    }
    if(countL==countR){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s = "book";
    if(halves_alike(s)){
        cout << "they have the same number of vowels"<<endl;
    }
    else{
        cout << "they donot have the same number of vowels"<<endl;
    }
    return 0;
}