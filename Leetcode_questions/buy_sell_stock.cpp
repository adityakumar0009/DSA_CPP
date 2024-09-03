#include<iostream>
using namespace std;
int buy_sell(int arr[],int n){
    int l=0;
    int r =1;
    int max_profit = 0;
    while(r<n){
        if(arr[l]<arr[r]){
            int profit = arr[r]-arr[l];
            max_profit = max(profit,max_profit);
        }
        else{
            l=r;
        }
        r++;
    }
    return max_profit;
}
int main(){
    int arr[6]= {7,1,5,3,6,4};
    int ans = buy_sell(arr,6);
    cout<<"max_profit->"<<ans;
    return 0;
}