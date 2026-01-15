#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    m["mobile"] = 60;
    m["laptop"] = 80;
    m["washing_machine"] = 120;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;;
    }
    cout<<"count"<<m.count("mobile")<<endl;
    cout<<m["laptop"]<<endl;
    cout<<endl;
    return 0;
}