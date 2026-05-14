//string rotation
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1 = "abc";
    string s2 = "cab";
    if(s1.length()!=s2.length()){
        cout<<"No"<<endl;
        return 0;
    }
    string temp = s1+s2;
    if (temp.find(s2) != string::npos)
    {
        cout<<"String may be rotated"<<endl;
    }
    else{
        cout<<"String is not rotated"<<endl;
    }
    return 0;
}