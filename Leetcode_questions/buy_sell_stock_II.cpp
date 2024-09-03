#include<iostream>
using namespace std;
int buy_sell(int arr[],int n){
    int profit = 0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1]){
            profit+=arr[i]-arr[i-1];
        }
    }
    return profit;
}
int main(){
    int arr[6]={7,1,5,3,6,4};
    int ans = buy_sell(arr,6);
    cout<<"max_profit->"<<ans;
    return 0;
}