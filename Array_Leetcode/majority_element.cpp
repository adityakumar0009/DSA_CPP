#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majority_element(vector<int>& arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int freq = 1;
    int ans = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = arr[i];
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {3, 2, 3};
    cout << "majority element is " << majority_element(arr);
    return 0;
}