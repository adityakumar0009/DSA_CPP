#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> intersection_array(vector<int>& arr1, vector<int>& arr2){
    int i =0;
    int j = 0;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    vector<int> result;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            if(result.empty() || result.back()!=arr1[i]){
                result.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    return result;
}
int main(){
    vector<int> arr1 = {4, 9, 5};
    vector<int> arr2 = {9, 4, 9, 8, 4};
    vector<int> ans = intersection_array(arr1,arr2);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}