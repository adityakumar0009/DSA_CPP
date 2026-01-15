#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<vector<int>> diagonal_matrix(vector<vector<int>>& mat){
    int m = mat.size();
    int n = mat[0].size();
    unordered_map<int,vector<int>> um;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            um[i-j].push_back(mat[i][j]);
        }
    }
    //sort
    for(auto& it : um){
        sort(it.second.begin(),it.second.end());
    }
    //now put back them in sorted order
    for(int i=m-1; i>=0; i--){
        for(int j=n-1; j>=0; j--){
            mat[i][j] = um[i-j].back();
            um[i-j].pop_back();
        }
    }
    return mat;
}
int main(){
    vector<vector<int>> mat = { {3, 3, 1, 1},
                                {2, 2, 1, 2},
                                {1,1,1,2}};
    vector<vector<int>> result = diagonal_matrix(mat);
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }                            
    return 0;
}