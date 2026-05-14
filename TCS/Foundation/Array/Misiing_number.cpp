#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int missing_number(vector<int>& arr){
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
    }
    int largest_number = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        largest_number = max(largest_number,arr[i]);
    }
    int Total_sum =  largest_number*(largest_number+1)/2;
    return Total_sum-sum;
}
int main(){
    vector<int> arr = {1,2,3,5};
    cout<<"Misiing number is "<<missing_number(arr);
    return 0;
}