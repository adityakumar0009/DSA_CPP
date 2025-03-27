#include<iostream>
using namespace std;
bool is_subsequence(string& str1, string& str2){
    int i = 0;
    int j = 0;
    while(i<str1.length() && j<str2.length()){
        if(str1[i]==str2[j] || str1[i]+1==str2[j] || str1[i]-25==str2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    if(j==str2.length()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string str1 = "abc";
    string str2 = "ad";
    cout<<"subsequence cycle or not -> "<<is_subsequence(str1,str2);
    return 0;
}