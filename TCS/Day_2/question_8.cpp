#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int largest_element(vector<int>& arr){
    int maximum = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        maximum = max(maximum,arr[i]);
    }
    return maximum;
}
int main(){
    vector<int> arr = {3, 7, 2, 9, 1};
    cout<<"Maximum element in array"<<largest_element(arr);
    return 0;
}