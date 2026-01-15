#include<iostream>
#include<vector>
#include<set>
using namespace std;
set<vector<int>> s;
void getAllcombinations(vector<int>& arr, int idx, int tar,vector<vector<int>> &ans, vector<int> &combin){
    if(idx==arr.size() || tar<0){
        return;
    }
    if(tar==0){
        if(s.find(combin)==s.end()){
            ans.push_back(combin);
            s.insert(combin);
        }
        return;
    }
    combin.push_back(arr[idx]);
    //single
    getAllcombinations(arr,idx+1,tar-arr[idx],ans,combin);
    //multiple
    getAllcombinations(arr,idx,tar-arr[idx],ans,combin);
    combin.pop_back(); //backtracking
    //exclusion
    getAllcombinations(arr,idx+1,tar,ans,combin);
}
vector<vector<int>> combination_sum(vector<int> &arr, int tar){
    vector<vector<int>> ans;
    vector<int> combin;
    getAllcombinations(arr, 0, tar, ans, combin);
    return ans;
}
int main(){
    vector<int> arr = {2, 3, 6, 7};
    int tar = 7;
    
    vector<vector<int>> result = combination_sum(arr, tar);

    cout << "Combinations that sum to " << tar << ":\n";
    for (auto &vec : result) {
        cout << "[ ";
        for (int num : vec) cout << num << " ";
        cout << "]\n";
    }

    return 0;
}