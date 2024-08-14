#include<iostream>
using namespace std;
void row_sum(int arr[3][4], int row,int column){
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int column=0; column<4; column++){
            sum+=arr[row][column];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3][4];
    //taking inputs
    for(int row = 0; row<3; row++){
        for(int column =0 ; column<4; column++){
            cin>>arr[row][column];
        }
    }
    //taking outputs
     for(int row = 0; row<3; row++){
        for(int column =0 ; column<4; column++){
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }
    cout<<"sum of rows are"<<endl;
    row_sum(arr,3,4);
    return 0;
}