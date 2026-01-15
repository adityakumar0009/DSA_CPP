#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    // s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    for(auto i: s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"Lower Bound "<<*(s.lower_bound(4))<<endl; //value should not be less than it
    cout<<"Upper Bound "<<*(s.upper_bound(4))<<endl; //value should be more than it;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i: s){
        cout<<i<<endl;
    }
}