#include<iostream>
#include<vector>
using namespace std;
int island_perimeter(vector<vector<int>>& grids){
    int perimeter = 0;
    int row = grids.size();
    int column = grids[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(grids[i][j]==1){
                if(i==0 && grids[i-1][j]==0){
                    perimeter = perimeter+1;
                }
                if(i==row-1 || grids[i+1][j]==0){
                    perimeter = perimeter+1;
                }
                if(j==0 || grids[i][j-1]==0){
                    perimeter = perimeter+1;
                }
                if(j==column-1 || grids[i][j+1]==0){
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
return 0;
}