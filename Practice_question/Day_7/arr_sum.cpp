#include<iostream>
using namespace std;
int sumofarr(int arr[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int sumarr = sumofarr(arr,6);
    cout<<"sum of array->"<<sumarr;
    return 0;
}