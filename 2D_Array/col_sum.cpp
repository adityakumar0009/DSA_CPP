#include<iostream>
using namespace std;
void printsum(int arr[][4], int i, int j){
    cout<<"printing sum->"<<endl;
     for(int j=0; j<4; j++){
        int sum = 0;
        for(int i=0; i<3; i++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3][4];
    //taking input
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //output
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    printsum(arr,3,4);
}