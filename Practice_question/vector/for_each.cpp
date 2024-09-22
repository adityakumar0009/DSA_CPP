#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<char> v = {'a','b','c'};
    vector<int> v;
    cout<<"size is->"<<v.size()<<endl;
    v.push_back(25);
    v.push_back(30);
    v.push_back(34);
    cout<<"size is->"<<v.size()<<endl;
    for(int val : v){
            cout<<val<<endl;
    }
    return 0;
}