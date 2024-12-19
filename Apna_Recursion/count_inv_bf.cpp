#include<iostream>
#include<vector>
using namespace std;
int count_inv(vector<int>&arr, int st, int end){
    int count = 0;
    for(int i =0; i<arr.size()-1;i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> arr = {6,3,5,2,7};
    int ans = count_inv(arr,0,arr.size()-1);
    cout<<"count_inversion : "<<ans;
    return 0;
}