#include<iostream>
using namespace std;
string merge_alternate(string s1,string s2){
    int i = 0;
    string result = "";
    while(i<s1.size() || i<s2.size()){
        if(i<s1.length()){
            result+=s1[i];
        }
        if(i<s2.length()){
            result+=s2[i];
        }
        i++;
    }
    return result;
}
int main(){
    string s1 = "abc";
    string s2 = "pqr";
    cout<<"The new string after merging it is "<<merge_alternate(s1,s2);
    return 0;
}