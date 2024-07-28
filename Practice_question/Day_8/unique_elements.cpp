#include<iostream>
using namespace std;
int printarr(int arr[],int n){
    for(int i =0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int uniqueelements(int arr[],int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int brr[9] = {1,2,3,4,1,2,3,4,5};
    int unique = uniqueelements(brr,9);
    cout<<"unique elements are->"<<unique<<endl;
    printarr(brr,9);
    return 0;
}