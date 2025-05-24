#include<iostream>
#include<vector>
#include<set>
using namespace std;
set<vector<int>> s;
void get_All_com(vector<int>& arr,int idx,int target,vector<vector<int>>& ans,vector<int>&combin){
    if(idx==arr.size() || target<0){
        return;
    }
    if(target==0){
        if(s.find(combin)==s.end()){
            ans.push_back(combin);
            s.insert(combin);
        }
        return;
    }

    //single include
    combin.push_back(arr[idx]);
    get_All_com(arr,idx+1,target-arr[idx],ans,combin);
    //multiple include
    get_All_com(arr,idx,target-arr[idx],ans,combin);
    //exclude
    combin.pop_back();//backtracking
    get_All_com(arr,idx+1,target,ans,combin);
}
vector<vector<int>> combination_sum(vector<int>& arr,int target){
    vector<vector<int>> ans;
    vector<int> combin;
    get_All_com(arr,0,target,ans,combin);
    return ans;
}
int main(){
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> result = combination_sum(arr, target);
    for(auto comb : result){
        for(int num : comb){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}