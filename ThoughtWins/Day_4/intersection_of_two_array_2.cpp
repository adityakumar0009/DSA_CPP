#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> intersection(vector<int>& nums1,vector<int>& nums2){
    int i = 0;
    int j = 0;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int> result;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]>nums2[j]){
            j++;
        }
        else if(nums1[i]<nums2[j]){
            i++;
        }
        else{
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return result;
}
int main(){
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = intersection(nums1,nums2);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}