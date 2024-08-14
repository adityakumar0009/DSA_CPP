#include<iostream>
using namespace std;
int main(){
    //creating an array
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};//row wise

    int arr[3][4] = {{1,2,3,4},{4,3,2,1},{7,6,5,4}};
    //taking inputs
    // for(int row=0; row<3; row++){//row wise input
    //     for (int column = 0; column<4; column++)
    //     {
    //         cin>>arr[row][column];
    //     }
    // }

    // //taking input column wise
    // for(int column=0; column<4; column++){
    //     for(int row=0; row<3; row++){
    //         cin>>arr[row][column];
    //     }
    // }
    
    //taking outputs
    for(int row=0; row<3; row++){
        for(int column=0; column<4; column++){
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }
    return 0;
}