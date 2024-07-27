#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i =0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10] = {10,9,-1,3,5,-8,2,6,7,4};
    cout<<"enter the key"<<endl;
    int key;
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<<"it is present"<<endl;
    }
    else{
        cout<<"it is not present"<<endl;
    }
    return 0;
}