#include<iostream>
#include<vector>
using namespace std;
void set_zero(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    vector<bool> row(m,false);
    vector<bool> col(n,false);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==0){
                row[i] = true;
                col[i] = true;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(row[i] || col[j]){
                matrix[i][j] = 0;
            }
        }
    }
}
int main(){
    vector<vector<int>> matrix = { {1, 1, 1},
                                   {1, 0, 1},
                                   {1,1,1} };
    set_zero(matrix);
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
    }                               
    return 0;
}