#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i =0; i<size; i++){
        cout<<arr[i];
    }
}
int main(){
    int first[10]={9,8};
    printarray(first,10);
    cout<<endl;
    int firstsize = sizeof(first)/sizeof(int);
    cout<<"size of first is->"<<firstsize<<endl;
    return 0;
}