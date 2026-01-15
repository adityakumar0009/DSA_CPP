#include<iostream>
using namespace std;
string result(string& s){
    int n = s.size();
    int i = 0;
    string temp = "";
    while(i<n){
        if(s[i]!='#'){
            temp.push_back(s[i]);
        }
        else if(temp.length()>0){
            temp.pop_back();
        }
        i++;
    }
    return temp;
}
bool back_space(string s,string t){
    string s_result = result(s);
    string t_result = result(t);
    return s_result==t_result;
}
int main(){
    string s = "ab#c";
    string t = "ad#c";
    if(back_space(s,t)){
        cout<<"Back space compare successfully"<<endl;
    }
    else{
        cout<<"Back space doesnot compare sussessfully"<<endl;
    }
    return 0;
}