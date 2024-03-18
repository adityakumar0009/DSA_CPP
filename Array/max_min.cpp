#include<iostream>
using namespace std;
int getmax(int num[],int n){
    int max = INT16_MIN;
    for(int i =0; i<n; i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}
int getmin(int num[],int n){
    int min = INT16_MAX;
    for(int i =0; i<n; i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}    
int main(){
    int size;
    cin>>size;
    int num[100];
    //taking input in array
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    cout<<"maximum value is"<<getmax(num,size)<<endl;
    
    cout<<"maximum value is"<<getmin(num,size)<<endl;
}
