#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);
    cout<<"3 is present or not->"<<binary_search(v.begin(),v.end(),3);
}