#include<iostream>
#include<vector>
using namespace std;
int second_largest(vector<int>& arr){
    int largest = arr[0];
    int second_largest = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>second_largest){
            second_largest = arr[i];
        }
    }
    return second_largest;
}
int main(){
    vector<int> arr = {2,5,6,3,10,11};
    cout<<"Second largest number is "<<second_largest(arr);
    return 0;
}