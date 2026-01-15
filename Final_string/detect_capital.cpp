#include<iostream>
using namespace std;
bool all_capital(string word){
    for(int i=0; i<word.size(); i++){
        if(word[i]<'A' || word[i]>'Z'){
            return false;
        }
    }
    return true;
}
bool all_small(string word){
    for(int j=0; j<word.size(); j++){
        if(word[j]<'a' || word[j]>'z'){
            return false;
        }
    }
    return true;
}
bool detect_capital(string word){
    if(all_capital(word) || all_small(word) || all_small(word.substr(1))){
        return true;
    }
    return false;
}
int main(){
    string word = "FlaG";
    if(detect_capital(word)){
        cout << "usage of capitals in it is right."<<endl;
    }
    else{
        cout<<"Usage of capitals not in it is right"<<endl;
    }
    return 0;
}