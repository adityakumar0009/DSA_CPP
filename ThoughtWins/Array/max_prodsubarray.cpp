#include<iostream>
#include<vector>
using namespace std;
int max_prosub(vector<int>& arr){
    int max_pro = arr[0];
    int min_pro = arr[0];
    int result = arr[0];
    for(int i=1; i<arr.size(); i++){
        int curr = arr[i];
        if(curr<0){
            swap(max_pro,min_pro);
        }
        max_pro = max(curr,curr*max_pro);
        min_pro = min(curr,curr*min_pro);
        result = max(max_pro,result);
    }
    return result;
}
int main(){
    vector<int> arr = {2, 3, -2, 4};
    cout<<"The max subarray product is "<<max_prosub(arr);
    return 0;
}