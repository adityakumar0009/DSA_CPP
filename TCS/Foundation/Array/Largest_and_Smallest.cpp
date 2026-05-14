#include<iostream>
#include<vector>
#include<climits>
using namespace std;
pair<int,int> largest_smallest(vector<int>& arr){
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0; i<arr.size(); i++){
        largest = max(largest,arr[i]);
        smallest = min(smallest,arr[i]);
    }
    return {largest,smallest};
}
int main(){
    vector<int> arr = {10,6,8,19};
    pair<int,int> ans = largest_smallest(arr);
    cout<<"Largest number is "<<ans.first<<endl;
    cout<<"Smallest number is "<<ans.second<<endl;
    return 0;
}