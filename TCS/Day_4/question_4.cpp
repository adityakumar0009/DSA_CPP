#include<iostream>
using namespace std;
int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;
    int max_right = arr[n-1];
    cout<<max_right<<" ";
    for(int i=n-2; i>=0; i--){
        if(arr[i]>max_right){
            max_right = arr[i];
            cout<<max_right<<" ";
        }
    }
    return 0;
}