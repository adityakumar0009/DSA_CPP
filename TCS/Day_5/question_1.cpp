//majority element
#include<iostream>
#include<vector>
using namespace std;
int majority_element(vector<int>& arr,int n){
    int ans = 0;
    int count = 0;
    for(int i=0; i<arr.size(); i++){
        if(count==0){
            ans = arr[0];
        }
        if(arr[i]==ans){
            count++;
        }
        else{
            count--;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {2, 2, 1, 1, 2, 2, 2};
    int n = 7;
    cout<<"Majority element is "<<majority_element(arr,n);
    return 0;
}