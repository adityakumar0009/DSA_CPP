#include<iostream>
using namespace std;
bool is_linear(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingpart = is_linear(arr+1,size-1,key);
        return remainingpart;
    }
}
int main(){
    int arr[5] = {2,4,5,6,7};
    int size = 5;
    int key = 5;
    int ans = is_linear(arr,size,key);
    if(ans){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }
    return 0;
}