#include<iostream>
#include<vector>
using namespace std;
int count_negative(vector<vector<int>>& grid){
    int count = 0;
    int row = grid.size();
    int column = grid[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(grid[i][j]<0){
                count = count+1;
            }
        }
    }
    return count;
}
int main(){
    vector<vector<int>> grid = { {4, 3, 2, -1},
                                 {3, 2, 1, -1},
                                 {1, 1, -1, -2},
                                 {-1, -1, -2, -3} };
    cout<<"Total number of negative is "<<count_negative(grid);
    return 0;
}