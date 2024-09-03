#include<iostream>
using namespace std;
int remove_element(int arr[],int val){
    int k =0;
    for(int i=0; i<7; i++){
        if(arr[i]!=val){
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}
int main(){
    int arr[7] = {1,2,3,4,4,5,6};
    int ans = remove_element(arr,4);
    for(int i = 0; i < ans; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}