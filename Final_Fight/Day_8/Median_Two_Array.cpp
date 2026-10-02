#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
double median_two_array(vector<int>& nums1, vector<int>& nums2){
    vector<int> arr;
    for(int i=0; i<nums1.size(); i++){
        arr.push_back(nums1[i]);
    }
    for(int i=0; i<nums2.size(); i++){
        arr.push_back(nums2[i]);
    }
    int n = arr.size();
    if(n%2!=0){
        return arr[n/2];
    }
    else{
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
}
int main(){
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    cout<<"Median of two array is "<<median_two_array(nums1,nums2);
    return 0;
}