#include<iostream>
using namespace std;
bool is_present(int arr[][4], int target, int row, int column){
    for(int row=0; row<3; row++){
        for(int column=0; column<4; column++){
            if(arr[row][column]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][4];
    //taking inputs
    for(int row=0; row<3; row++){
        for(int column=0; column<4; column++){
            cin>>arr[row][column];
        }
    }

    //taking outputs
    for(int row=0; row<3; row++){
        for(int column=0; column<4; column++){
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"enter the target element"<<endl;
    cin>>target;
    
    if(is_present(arr,target,3,4)){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }
    return 0;
}