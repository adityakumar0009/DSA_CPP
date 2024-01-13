#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int k){
        if(size==0){
            return false;
        }
        if(arr[0]==k){
            return true;
        }
        else{
            bool remainingpart = linearsearch(arr+1,size-1,k);
            return remainingpart;
        }
    }
int main(){
    int arr[5] = {2 ,3 ,5, 7, 8};
    int size =5;
    int key = 2;
    bool ans = linearsearch(arr,size,key);
    if(ans){
        cout<<"present"<<endl;

    }
    else{
        cout<<"absent"<<endl;
    }
    return 0;
}