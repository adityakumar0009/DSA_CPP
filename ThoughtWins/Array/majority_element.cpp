#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majority_element(vector<int>& arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int ans = arr[0];
    int freq = 1;
    for(int i=1; i<arr.size(); i++){
        if(arr[i]==arr[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = arr[i];
        }
    }
    if(freq>n/2){
        return ans;
    }
}
int main(){
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    cout<<"The majority element present in the array is "<<majority_element(arr);
    return 0;
}