#include<iostream>
#include<vector>
using namespace std;
void rev_array(vector<int>& arr){
    int st = 0;
    int end = arr.size()-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
int main(){
    vector<int> arr = {5,4,3,2,1};
    rev_array(arr);
    for(int i=0 ;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}