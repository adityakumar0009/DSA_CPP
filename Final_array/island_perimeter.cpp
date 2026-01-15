#include<iostream>
#include<vector>
using namespace std;
int island_perimeter(vector<vector<int>>& grid){
    int row = grid.size();
    int col = grid[0].size();
    int perimeter = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(grid[i][j]==1){
                if(i==0 || grid[i-1][j]==0){
                    perimeter = perimeter+1;
                }
                if(i==row-1 || grid[i+1][j]==0){
                    perimeter = perimeter+1;
                }
                if(j==0 || grid[i][j-1]==0){
                    perimeter = perimeter+1;
                }
                if(j==col-1 || grid[i][j+1]==0){
                    perimeter = perimeter+1;
                }
            }
        }
    }
    return perimeter;
}
int main(){
    vector<vector<int>> grid = { {0, 1, 0, 0},
                                 {1, 1, 1, 0},
                                 {0, 1, 0, 0},
                                 {1, 1, 0, 0}};
    cout<<"The perimeter of island is "<<island_perimeter(grid);                            
    return 0;
}