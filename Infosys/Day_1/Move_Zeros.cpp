#include<iostream>
using namespace std;
int Majority(int arr[],int n){
    int freq = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(freq==0){
            ans = arr[i];
        }
        if(ans==arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Majority element is "<<Majority(arr,n);
    return 0;
}