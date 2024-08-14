#include<iostream>
#include<climits>
using namespace std;
int largest_row_sum(int arr[3][4],int row, int column){
    int maxi = INT64_MIN;
    int rowindex = -1;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int column=0; column<4; column++){
            sum+=arr[row][column];
        }
        if(sum>maxi){
            maxi = sum;
            rowindex = row;
        }
    }
    cout<<"the maximum sum is"<<maxi<<endl;
    return rowindex;
}
int main(){
    int arr[3][4];
    //taking input
    for(int row =0; row<3; row++){
        for(int column=0; column<4; column++){
            cin>>arr[row][column];
        }
    }
    //output
    for(int row =0; row<3; row++){
        for(int column=0; column<4; column++){
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }
    cout<<"largest row is at->"<<largest_row_sum(arr,3,4);
    return 0;
}