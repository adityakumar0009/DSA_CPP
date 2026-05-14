#include<iostream>
#include<vector>
using namespace std;
bool is_toeplitz(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(matrix[i][j]==matrix[i-1][j-1]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<vector<int>> matrix = { {1, 2, 3, 4},
                                   {5, 1, 2, 3},
                                   {9, 5, 1, 2} };
    if(is_toeplitz(matrix)){
        cout<<"It is a toeplitz matrix"<<endl;
    }                               
    else{
        cout<<"It is not a toeplitz matrix"<<endl;
    }
    return 0;
}