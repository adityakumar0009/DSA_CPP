#include<iostream>
#include<vector>
using namespace std;
int majority_element(vector<int>& arr){
    int n = arr.size();
    int result = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        if(count==0){
            result = arr[i];
        }
        if(result==arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return result;
}
int main(){
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    cout<<"The majority element present in the arr is "<<majority_element(arr);
    return 0;
}