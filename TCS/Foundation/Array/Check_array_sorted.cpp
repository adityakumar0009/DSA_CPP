#include<iostream>
#include<vector>
using namespace std;
bool is_sorted(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<arr[i+1]){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> arr = {1,3,5,7};
    if(is_sorted(arr)){
        cout<<"It ia sorted array"<<endl;
    }
    else{
        cout<<"It is not a sorted array";
    }
    return 0;
}