#include<iostream>
#include<vector>
using namespace std;
int majority_element(vector<int> &arr){
    int count = 0;
    int result = 0;
    for(int i=0; i<arr.size(); i++){
        if(count=0){
            result = arr[i];
        }
        if(result=arr[i]){
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
    cout<<"Majority element is -> "<<majority_element(arr);
    return 0;
}