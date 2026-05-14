//find missing number
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int missing_number(vector<int>& arr,int n){
    int total = n*(n+1)/2;
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
    }
    return total-sum;
}
int main(){
    vector<int> arr = {1,2,4,5};
    int n = 5;
    cout<<"Missing number is "<<missing_number(arr,n);
    return 0;
}