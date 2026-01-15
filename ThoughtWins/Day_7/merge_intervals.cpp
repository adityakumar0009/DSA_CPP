#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> merge_interval(vector<vector<int>>& intervals){
    vector<vector<int>> result;
    sort(intervals.begin(),intervals.end());
    for(int i=0; i<intervals.size(); i++){
        if(result.empty()|| result.back()[1]<intervals[i][0]){
            result.push_back(intervals[i]);
        }
        else{
            result.back()[1] = max(result.back()[1],intervals[i][1]);
        }
    }
    return result;
}
int main(){
    vector<vector<int>> intervals = {{1,2},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = merge_interval(intervals);
    cout << "Merged Intervals: ";
    for(int i=0; i<ans.size(); i++){
        cout << "[" << ans[i][0] << "," << ans[i][1] << "] ";
    }
    return 0;
}