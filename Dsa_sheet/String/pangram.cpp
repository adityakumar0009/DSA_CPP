#include<iostream>
#include<unordered_set>
using namespace std;
bool is_pangram(string sen){
    unordered_set<char> letters;
    for(int i=0; i<sen.size(); i++){
        letters.insert(sen[i]);
    }
    if(letters.size()==26){
        return true;
    }
    return false;
}
int main(){
    string str = "thequickbrownfoxjumpsoverthelazydog";
    if(is_pangram(str)){
        cout<<"it is pangram";
    }
    else{
        cout<<"it is not a pangram";
    }
    return 0;
}