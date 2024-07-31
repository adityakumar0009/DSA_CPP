#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i =1; i<n;i++){
        int temp = arr[i];
        int j= i-1;
        for(; j>=0; j--){
            //shift
            if(arr[j]>temp){
                arr[j+1] = arr[j];

            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main(){
    int brr[5] = {1,5,3,9,6};
    insertion_sort(brr,5);
    cout<<"sorted elements are->"<<" ";
    for(int i=0; i<5; i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}