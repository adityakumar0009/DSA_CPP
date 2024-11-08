#include<iostream>
#include<vector>
using namespace std;
bool search_matrix(vector<vector<int>> &mat,int target ){
    int m = mat.size();
    int n = mat[0].size();
    int row = 0;
    int col = n-1;
    while(row<m && col>=0){
        if(target==mat[row][col]){
            return true;
        }
        else if(target<mat[row][col]){
            col--;
        }
        else{
            row++;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 5;
    if(search_matrix(mat,target)){
        cout<<"element is found"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }
    return 0;
}