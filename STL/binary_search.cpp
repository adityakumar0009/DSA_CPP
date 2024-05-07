#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    cout<<"search 6->"<<binary_search(v.begin(),v.end(),6)<<endl; 
    cout<<"lower bound->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a = 8;
    int b =10;
    cout<<"max->"<<max(a,b)<<endl;
    cout<<"min->"<<min(a,b)<<endl;
    swap(a,b);
    cout<<"value of a->"<<a<<endl;
    cout<<"value os b->"<<b<<endl;
    string ab = "asdity";
    reverse(ab.begin(),ab.end());
    cout<<"string->"<<ab;
}
