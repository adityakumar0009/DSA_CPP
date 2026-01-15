#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector<int> diagonal_traverse(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> result;
    map<int,vector<int>> mp;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            mp[i+j].push_back(matrix[i][j]);
        }
    }
    bool flip = true;
    for(auto& it : mp){
        if(flip){
            reverse(it.second.begin(), it.second.end());   
        }
        for(int& num : it.second){
            result.push_back(num);
        }
        flip != flip;
    }
    return result;
}
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result = diagonal_traverse(matrix);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}