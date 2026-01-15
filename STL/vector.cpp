#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v;
    // cout<<"capacity " <<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<"capacity " <<v.capacity()<<endl;
    // v.push_back(2);
    // cout<<"capacity " <<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<"capacity " <<v.capacity()<<endl;
    // cout<<"element found at second index " <<v.at(2)<<endl;
    // cout<<"front " <<v.front()<<endl;
    // cout<<"back " <<v.back()<<endl;
    // cout<<"before pop"<<endl;
    // for(int i:v){
    //     cout<<i<<endl;
    // }
    // cout<<endl;
    // v.pop_back();
    // cout<<"after pop"<<endl;
    // for(int i:v){
    //     cout<<i<<endl;
    // }
    vector<int> vec = {1,2,3,4,5};
    //iterator
    // vector<int>::iterator it;
    // for(it=vec.begin(); it!=vec.end(); it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;

    //reverse iterator
    // vector<int>::reverse_iterator it;
    // for(it=vec.rbegin(); it!=vec.rend(); it++){
    //     cout << *(it) << " ";
    // }
    // cout<<endl;

    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

//Stl has four parts 1>container 2>iterator 3>Algorithms 4>Functors
//size and capacity are two different thing size is total number of elements capacity means how much element it may contain