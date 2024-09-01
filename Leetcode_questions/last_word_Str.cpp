#include<iostream>
using namespace std;
int get_len_word(string s){
    int i = s.size()-1;
    int len = 0;
    while (i>=0 && s[i]==' ')
    {
        i--;
    }
    while(i>=0 && s[i]!=' '){
        i--;
        len++;
    }
    return len;
    
}
int main(){
    // string s = "my name is aditya"; 
    string s;
    cout<<"enter the string->"<<endl;
    getline(cin, s); // Use getline to capture the entire line of input
    int ans = get_len_word(s);
    cout<<ans;
    return 0;
}