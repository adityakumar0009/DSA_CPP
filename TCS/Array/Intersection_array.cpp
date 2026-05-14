#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> intersection(vector<int>& nums1,vector<int>& nums2){
    vector<int> result;
    sort(nums1.begin(),nums1.begin());
    sort(nums2.begin(),nums2.begin());
    int i = 0;
    int j = 0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]>nums2[j]){
            j++;
        }
        else if(nums1[i]<nums2[j]){
            i++;
        }
        else{
            if(result.empty() || result.back() != nums1[i]){
                result.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }
    return result;
}
int main(){
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    vector<int> ans = intersection(nums1,nums2);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}