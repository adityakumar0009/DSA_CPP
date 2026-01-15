#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string,int> m;
    m.emplace("TV",100);
    m.emplace("TV",100);
    m.emplace("TV", 100);
    m.emplace("TV", 100);
    m.erase(m.find("TV"));
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}