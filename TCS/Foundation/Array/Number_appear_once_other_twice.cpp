#include<iostream>
#include<vector>
using namespace std;
int number(vector<int>& arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    vector<int> arr = {4,1,2,1,2};
    cout<<"Number that appears one and other twice is "<<number(arr);
    return 0;
}