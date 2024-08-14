#include<iostream>
using namespace std;
bool binary_search(int arr[3][4], int row, int column,int target){
    int start = 0;
    int end = row*column-1;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        int element = arr[mid/column][mid%column];
        if(element==target){
            return 1;
        }
        if(element<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return 0;
}
int main(){
    int arr[3][4];
    for(int row=0; row<3; row++){
        for(int column=0; column<4; column++){
            cin>>arr[row][column];
        }
    }
    for(int row=0; row<3; row++){
        for(int column=0; column<4; column++){
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"enter the target->"<<endl;
    cin>>target;
    if(binary_search(arr,3,4,target)){
        cout<<"it is found "<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}