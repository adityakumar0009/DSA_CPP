#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> merge_intervals(vector<vector<int>>& interval){
    sort(interval.begin(),interval.end());
    vector<vector<int>> result;
    for(int i=0; i<interval.size(); i++){
        if(result.empty()||result.back()[1]<interval[i][0]){
            result.push_back(interval[i]);
        }
        else{
            result.back()[1] =max(result.back()[1],interval[i][1]); 
        }
    }
    return result;
}
int main(){
    vector<vector<int>> interval = {{1, 3},{2,6},{8,10},{15,18}};
    vector<vector<int>> result = merge_intervals(interval);
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[0].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}