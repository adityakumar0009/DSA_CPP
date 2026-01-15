#include<iostream>
#include<vector>
using namespace std;
int XOR_ALL(vector<int>& nums1,vector<int>& nums2){
    int XOR = 0;
    int m = nums1.size();
    int n = nums2.size();
    if(m%2!=0){
        for(int i=0; i<n; i++){
            XOR^=nums2[i];
        }
    }
    if(n%2!=0){
        for(int i=0; i<m; i++){
            XOR^nums1[i];
        }
    }
    return XOR;
}
int main(){
    vector<int> nums1 = {2, 1, 3};
    vector<int> nums2 = {10, 2, 5, 0};
    cout<<"Bitwise pair of all pair is "<<XOR_ALL(nums1,nums2);
    return 0;
}