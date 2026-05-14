#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> intersect_array(vector<int>& nums1,vector<int>& nums2){
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int> ans;
    int i =0;
    int j = 0;
    while(i<=nums1.size() && j<nums2.size()){
        if(nums1[i]>nums2[j]){
            j++;
        }
        else if(nums1[i]<nums2[j]){
            i++;
        }
        else{
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2,2};
    vector<int> ans = intersect_array(nums1,nums2);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}