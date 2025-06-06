#include<iostream>
#include<vector>
using namespace std;
bool is_panagram(string sentence){
    vector<int> arr(26,0);
    for(char &ch : sentence){
        int index = ch - 'a';
        arr[index]++;

    }
    for(int &count : arr){
        if(count==0){
            return false;
        }
    }
    return true;
}
int main(){
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    if(is_panagram(sentence)){
        cout<<"it is a panagram sentence "<<endl;
    }
    else{
        cout<<"it is not a panagram sentence"<<endl;
    }
    return 0;
}