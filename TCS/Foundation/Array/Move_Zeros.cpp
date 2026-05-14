#include<iostream>
#include<vector>
using namespace std;
void move_zeros(vector<int>& arr){
    int index = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=0){
            arr[index++] = arr[i];
        }
    }
    while(index<arr.size()){
        arr[index++] = 0;
    }
}
int main(){
    vector<int> arr = {0,1,20,4,0,5};
    move_zeros(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}