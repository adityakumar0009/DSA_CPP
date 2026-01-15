#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> majority_element(vector<int>& arr){
    int freq = 1;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    vector<int> ans;
    for(int i=1; i<arr.size(); i++){
        if(arr[i]==arr[i-1]){
            freq++;
        }
        else{
            if(freq>n/3){
                ans.push_back(arr[i-1]);
            }
            freq = 1;
        }
    }
    if(freq>n/3){
         ans.push_back(arr[n-1]);
    }
    return ans;
}
int main(){
    vector<int> arr = {3, 2, 3};
    vector<int> majority = majority_element(arr);
    for (int num : majority)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}