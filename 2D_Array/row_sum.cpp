#include<iostream>
using namespace std;
void printsum(int arr[][4], int i, int j){
    cout<<"printing sum->"<<endl;
     for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int largestrow(int arr[][4], int i, int j){
    int maxi = INT8_MIN;
    int rowindex = -1;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi = sum;
            rowindex = i;
        }
}
cout<<"the max sum is->"<<maxi<<endl;
return rowindex;
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
    cout<<largestrow(arr,3,4);
}