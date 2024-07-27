#include<iostream>
using namespace std;
void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void altswap(int arr[],int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8] = {2,4,6,8,1,3,5,7};
    int odd[5] = {2,4,5,6,8};
    altswap(even,8);
    printarray(even,8);
    altswap(odd,5);
    printarray(odd,5);
    return 0;
}