#include<iostream>
#include<vector>
using namespace std;
void move_zero(vector<int>& arr){
    int index = 0;
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[index++] = arr[i];
        }
    }
    while(index<n){
        arr[index++] = 0;
    }
}
int main(){
    vector<int> arr = {0, 1, 0, 3, 12};
    move_zero(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}