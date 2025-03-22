#include<iostream>
#include<vector>
using namespace std;
bool string_swap_equal(string& s1,string& s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    if(s1==s2){
        return true;
    }
    vector<int> index;
    for(int i=0; i<s1.length(); i++){
        if(s1[i]!=s2[i]){
            index.push_back(i);
        }
    }
    if(index.size()!=2){
        return false;
    }
    else{
        swap(s1[index[0]],s1[index[1]]);
    }
    return s1==s2;
}
int main(){
    string s1 = "bank";
    string s2 = "kanb";
    if(string_swap_equal(s1,s2)){
        cout<<"after swapping string is equal";
    }
    else{
        cout<<"after swapping string is not equal";
    }
    return 0;
}