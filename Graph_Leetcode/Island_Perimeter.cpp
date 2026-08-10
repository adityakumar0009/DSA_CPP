#include<iostream>
#include<vector>
using namespace std;
int island_perimeter(vector<vector<int>>& grid){
    int perimeter = 0;
    int row = grid.size();
    int column = grid[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(grid[i][j]==1){
                if(i==0 || grid[i-1][j]==0){
                    perimeter+=1;
                }
                if(i==row-1 || grid[i+1][j]==0){
                    perimeter+=1;
                }
                if(j==0 || grid[i][j-1]==0){
                    perimeter+=1;
                }
                if(j==column-1 || grid[i][j+1]==0){
                    perimeter+=1;
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
                                 {1, 1, 0, 0} };
    cout<<"Perimeter of Island is "<<island_perimeter(grid);                             
    return 0;
}