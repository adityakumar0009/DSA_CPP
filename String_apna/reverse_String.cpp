#include<iostream>
#include<vector>
using namespace std;
void reverse_string(vector<char>& s){
    int st = 0;
    int end = s.size()-1;
    while(st<end){
        swap(s[st],s[end]);
        st++;
        end--;
    }
}
int main(){
    vector<char> s= {'a','d','i','t','y','a'};
    cout<<"the reverse string is ";
    reverse_string(s);
    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    return 0;
}