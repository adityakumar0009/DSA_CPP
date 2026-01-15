#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int>> merge_interval(vector<vector<int>>& intervals){
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> result;
    for(int i=0; i<intervals.size(); i++){
        if(result.empty() || result.back()[1]<intervals[i][0]){
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
    vector<vector<int>> result = merge_interval(intervals);
    for(int i=0 ;i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}