#include<iostream>
#include<vector>
using namespace std;
bool is_palindrome(vector<int>& n){
    int st = 0;
    int end = n.size()-1;
    while(st<end){
        if(n[st]!=n[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    vector<int> n = {1,2,1};
    if(is_palindrome(n)){
        cout<<"It is a palindrome number"<<endl;
    }
    else{
        cout<<"It is not a palindrome number"<<endl;
    }
    return 0;
}