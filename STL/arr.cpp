#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    for(int i=0 ; i<a[i]; i++){
        cout<<a[i]<<endl;
    }
    cout<<"elements at first index"<<a.front()<<" "<<endl;
    cout<<"elements at last index"<<a.back()<<" "<<endl;
    cout<<"elements found at second index"<<" "<<a.at(2)<<" "<<endl;
}