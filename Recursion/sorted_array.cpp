#include<iostream>
using namespace std;
bool issorted(int array[],int size){
    //base case 
    if(size==0||size==1){
        return true;
    }
    if(array[0]>array[1]){
        return false;
    }
    else{
        bool remainingpart = issorted(array+1,size-1);
        return remainingpart;
    }
}
int main(){
    int arr[5]={6,2,3,5,4};
    int size = 5;
    bool ans = issorted (arr,size);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}