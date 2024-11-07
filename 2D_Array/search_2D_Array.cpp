#include<iostream>
#include<vector>
using namespace std;
bool searchInRow(vector<vector<int>> &mat, int target, int row)
{
    int startCol = 0;
    int endCol = mat[0].size() - 1;

    while (startCol <= endCol)
    {
        int midCol = startCol + (endCol - startCol) / 2;
        if (mat[row][midCol] == target)
        {
            return true;
        }
        else if (mat[row][midCol] < target)
        {
            startCol = midCol + 1;
        }
        else
        {
            endCol = midCol - 1;
        }
    }
    return false;
}
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
    int target = 5;
    if (search(mat, target))
    {
        cout << "Target found in the matrix." << endl;
    }
    else
    {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}