#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for (int i  : d)
    {
        cout<<i<<" ";
    }
    // d.pop_back();
    // cout<<endl;
    // for (int i : d)
    // {
    //     cout<<i<<endl;
    // }
    cout<<"front element is->"<<d.front()<<endl;
    cout<<"back elsement is->"<<d.back()<<endl;
    cout<<"element found at first index->"<<d.at(1)<<endl;
    // cout<<"delete first elememnt"<<d.erase();
    

    
    return 0;
}