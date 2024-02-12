#include<iostream>
using namespace std;
void printArr(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}
int main(){
    int first[10] = {1,4,6};
    int n =10;
    printArr(first,10);
    int firstsize = sizeof(first)/sizeof(int);
    cout<<"size of first is : "<<firstsize<<endl;
} 