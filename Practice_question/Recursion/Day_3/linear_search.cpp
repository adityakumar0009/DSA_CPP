#include<iostream>
using namespace std;
bool is_linear(int arr[5], int size,int key){
    for (int i =0; i<arr[5]; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={2,3,1,7,5};
    int size = 5;
    int key = 7;
    int ans = is_linear(arr,size,key);
    if(ans){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }
    return 0;
}