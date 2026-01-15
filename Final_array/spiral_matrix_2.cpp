#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate_matrix(int n){
    vector<vector<int>> matrix(n,vector<int>(n));
    int srow = 0;
    int erow = n-1;
    int scol = 0;
    int ecol = n-1;
    int num = 1;
    while(srow<= erow && scol<=ecol){
        for(int j=scol; j<=ecol; j++){
            matrix[srow][j] = num++;
        }
        for(int i=srow+1; i<=erow; i++){
            matrix[i][ecol] = num++;
        }
        if(srow!=erow){
            for(int j=ecol-1; j>=scol; j++){
                matrix[erow][j] = num++;
            }   
        }
        if(scol!=ecol){
            for(int i=erow-1; i>=srow+1; i--){
                matrix[i][scol] = num++;
            }
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    return matrix;
}
int main(){
    int n = 3;
    vector<vector<int>> result = generate_matrix(n);
    // Print the matrix
    for (auto &row : result) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}