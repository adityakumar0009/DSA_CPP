#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="aditya";
    m[13]="sinha";
    m[5]="kumar";
    m.insert({6,"sahlu"});
    cout<<"13 is present or not->"<<m.count(13)<<endl;
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    m.erase(5);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;    }
    return 0;
}