#include<iostream>
#include<vector>
using namespace std;
vector<int> spiral_matrix(vector<vector<int>>& matrix){
    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int srow = 0;
    int scol = 0;
    int ecol = n-1;
    int erow = m-1;
    while(srow<=erow && scol<=ecol){
        //top row
        for(int j=scol; j<=ecol; j++){
            ans.push_back(matrix[srow][j]);
        }
        // Right column
        for (int i = srow + 1; i <= erow; i++) {
            ans.push_back(matrix[i][ecol]);
        }
         // Bottom row
        for(int j = ecol - 1; j >= scol; j--) {
            if (srow == erow) {
                break;
            }
            ans.push_back(matrix[erow][j]);
        }
        // Left column
        for (int i = erow - 1; i > srow; i--) {
            if (scol == ecol) {
                break;
            }
            ans.push_back(matrix[i][scol]);
        }
        srow++;
        erow--;
        scol++;
        ecol--;
    }
    return ans;
}
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result = spiral_matrix(matrix);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}