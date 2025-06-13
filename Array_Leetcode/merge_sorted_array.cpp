#include<iostream>
#include<vector>
using namespace std;
vector<int> merge_sorted(vector<int>& nums1,int m,vector<int>& nums2,int n){
    int index = m+n-1;
    int i = m-1;
    int j = n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>=nums2[j]){
            nums1[index] = nums1[i];
            index--;
            i--;
        }
        else{
            nums1[index] = nums2[j];
            index--;
            j--;
        }
    }
    while(j>=0){
        nums1[index] = nums2[j];
        index--;
        j--;
    }
}
int main(){
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    merge_sorted(nums1, m, nums2, n);

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
    cout << endl;
    return 0;
}