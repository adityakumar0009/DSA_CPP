#include<iostream>
#include<vector>
using namespace std;
int upper_bound(vector<int>& arr,int target){
    int st = 0;
    int end = arr.size();
    int ans = 0;
    while(st<end){
        int mid = st+(end-st)/2;
        if(arr[mid]>=target){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int target = 2;
    int index = upper_bound(arr,target);
    if(index<arr.size()){
        cout<<"Lower index bound "<<index<<"-"<<arr[index]<<endl;
    }
    else{
        cout<<"No elemet found"<<endl;
    }
    return 0;
}