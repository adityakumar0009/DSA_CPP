#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a = {1,5,3,4};
    cout<<"size of array->"<<a.size()<<endl;
    cout<<"front element of array->"<<a.front()<<endl;
    cout<<"back element of array is->"<<a.back()<<endl;
    cout<<"element present at second index->"<<a.at(2)<<endl;
    return 0;
}