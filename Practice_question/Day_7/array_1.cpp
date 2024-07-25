#include<iostream>
using namespace std;
int main(){
    //array declare
    int number[15];
    //accessing
    cout<<"index at 14 index"<<number[14]<<endl;
    //initialize
    int arr[3]={3,6,9};
    cout<<"value at 2 index" << arr[2]<<endl;
    cout<<"everything is fine"<<endl;
    int second[15]={4,5};
    int n = 15;
    for (int i = 0; i < n; i++)
    {
       cout<<second[i];
    }
    
    return 0;
}