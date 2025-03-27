#include<iostream>
using namespace std;
string comprehension(string& word){
    int n = word.length();
    int i =0;
    string comp = "";
    while(i<n){
        int count = 0;
        char ch = word[i];
        while(i<n && count<9 && word[i]==ch){
            count++;
            i++;
        }
        comp += to_string(count) + ch;
    }
    return comp;
}
int main(){
    string word = "abcde";
    cout<<"string comprehension is -> "<<comprehension(word);
    return 0;
}