#include<iostream>
using namespace std;
bool allcapital(string word){
    for(int i=0; i<word.size(); i++){
        if(word[i]<'A' && word[i]>'Z'){
            return false;
        }
    }
    return true;
}
bool allsmall(string word){
    for(int i=0; i<word.size(); i++){
        if(word[i]<'a' && word[i]>'z'){
            return false;
        }
    }
    return true;
}
bool delete_capital(string word){
    if(allcapital(word) || allsmall(word) || allsmall(word.substr(1))){
        return true;
    }
    return false;
}
int main(){
    string word = "USA";
    if(delete_capital(word)){
        cout<<"it is true";
    }
    else{
        cout<<"it is false";
    }
    return 0;
}