#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"capacity of v->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity of v->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity of v->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity of v->"<<v.capacity()<<endl;
    
    cout<<"element found at 2 index->"<<v.at(2)<<endl;
    //elemnts before pop
    cout<<"element before pop"<<endl;
    for(int i:v){
        cout<<i<<endl;
    }
    cout<<"element after pop"<<endl;
    //element after pop
    v.pop_back();
    for(int i:v){
        cout<<i<<endl;
    }
    return 0;
}