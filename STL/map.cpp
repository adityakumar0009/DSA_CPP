#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="aditya";
    m[3]="sinha";
    m[2]="kumar";
    m.insert({5,"rishu"});
    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<endl;
    }
    cout<<"finding 3->"<<m.count(3);
    cout<<endl;
    cout<<"after erase"<<endl;
    m.erase(3);
    cout<<"finding 3->"<<m.count(3);
    cout<<endl;
    for(auto i: m){
        cout<<i.first<<endl;
    }
}

//key should be unique and data is present in sorted way

// C++ Iterators
//     Iterators are used to access and iterate through elements of data
//     structures(vectors, sets, etc.),
//     by "pointing" to them.