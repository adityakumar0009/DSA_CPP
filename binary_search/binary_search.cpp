#include<iostream>
#include<vector>
using namespace std;
int binary_Search(vector<int> arr,int tar){
    int s = 0;
    int e = arr.size()-1;
    while (s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==tar){
            return mid;
        }
        else if(arr[mid]>tar){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
    
}
int main(){
    vector<int> arr1 = {-1,0,4,6,8,9};
    int tar1 = 4;
    cout<<"binary_search_is"<<binary_Search(arr1,tar1)<<endl;
    vector<int> arr2 = {-2,0,5,6,9};
    int tar2 = 5;
    cout<<"binary_search_is"<<binary_Search(arr2,tar2)<<endl;
    return 0;
}