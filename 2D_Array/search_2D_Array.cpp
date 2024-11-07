#include<iostream>
#include<vector>
using namespace std;
bool search(vector<vector<int>>&mat,int target){
    int m = mat.size();
    int n = mat[0].size();
    int startRow = 0;
    int endRow = m-1;
    while (startRow<=endRow)
    {
        int midRow = startRow+(endRow-startRow)/2;
        if(target>=mat[midRow][0] && target<=mat[midRow][n-1]){
            return searchInRow(mat,target,midRow);
        }
        else if(target>=mat[midRow][n-1]){
            startRow = midRow+1;
        }
        else{
            midRow = midRow-1;
        }
    }
    return false;
    
}
int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    return 0;
}