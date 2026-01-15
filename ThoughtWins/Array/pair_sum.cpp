#include<iostream>
#include<vector>
using namespace std;
vector<int> pair_sum(vector<int>& arr, int target){
    vector<int> ans;
    int i = 0;
    int j = arr.size();
    while(i<j){
        int pair_sum = arr[i]+arr[j];
        if(pair_sum>target){
            j--;
        }
        else if(pair_sum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {2,7,11,15};
    int target = 9;
    vector<int> sum = pair_sum(arr,target);
    cout<<"The pair sum is present at index "<<sum[0]<<" "<<sum[1];
    return 0;
}