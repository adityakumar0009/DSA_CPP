#include<iostream>
#include<vector>
using namespace std;
bool is_sorted(vector<int> & arr, int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[n-1]<arr[n-2]){
        return false;
    }
    return is_sorted(arr,n-1);
}
int main(){
    vector<int> arr = {1,2,3,8,5};
    int n = arr.size();
    if(is_sorted(arr,n)){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;

}