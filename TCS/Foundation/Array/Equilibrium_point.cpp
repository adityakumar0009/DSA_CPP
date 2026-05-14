#include<iostream>
#include<vector>
using namespace std;
int equilibrium_point(vector<int>& arr){
    int Total_sum = 0;
    for(int i=0; i<arr.size(); i++){
        Total_sum+=arr[i];
    }
    int left_sum = 0;
    for(int i=0; i<arr.size(); i++){
        Total_sum-=arr[i];
        if(left_sum==Total_sum){
            return i;
        }
        left_sum+=arr[i];
    }
    return 0;
}
int main(){
    vector<int> arr = {1,3,5,2,2};
    cout<<"Equilibrium point is "<<equilibrium_point(arr);
    return 0;
}