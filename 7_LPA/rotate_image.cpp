#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>>& matrix){
    //transpose
    int m = matrix.size();
    int n = m;
    for(int i=0; i<m; i++){
        for(int j=i; j<n; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // reverse
    for(int i=0; i<m; i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main(){
    vector<vector<int>> matrix = {{1,2,3},
                                  {4,5,6},
                                  {7,8,9}};
    rotate(matrix);
    for(auto row : matrix){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}