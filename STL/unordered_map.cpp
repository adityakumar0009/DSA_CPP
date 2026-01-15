#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m.emplace("TV",100);
    m.emplace("Laptop",100);
    m.emplace("Radio", 100);
    m.emplace("Cricket", 100);
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}

// unordered_map ke andhar values duplicate nahi ho sakte
//it gives random data
// time complexity in majority of cases is o(1)