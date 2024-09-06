#include<iostream>
using namespace std;
int majority_element(int arr[], int n){
    int count = 1;
    int result = arr[0];
    for(int i=0; i<7; i++){
        if(count==0){
            result = arr[i];
        }
        if(result == arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return result;
}
int main(){
    int arr[7] = {1,2,3,3,3,4,5};
    int ans = majority_element(arr,7);
    cout<<"answer is->"<<ans;
    return 0;
}