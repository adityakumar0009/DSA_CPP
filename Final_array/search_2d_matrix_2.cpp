#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int column = matrix[0].size();
    int row_index = 0;
    int column_index = column-1;

    while(row_index < row && column_index>=0 ){
        int ele = matrix[row_index][column_index];
        if(ele==target){
            return 1;
        }
        if(ele<target){
            row_index++;
        }
        else{
            column_index--;
        }
    }
    return 0;
    }
int main(){
    vector<vector<int>> matrix = { {1, 4, 7, 11, 15},
                                   {2, 5, 8, 12, 19},
                                   {3, 6, 9, 16, 22},
                                   {10, 13, 14, 17, 24},
                                   {18, 21, 23, 26, 30} };
    int target = 20;
    if(searchMatrix(matrix,target)){
        cout<<"Element is found in matrix"<<endl;
    }                               
    else{
        cout<<"Element is not found in matrix"<<endl;
    }
    return 0;
}