#include<iostream>
#include<climits>
using namespace std;
int max_col_sum(int matrix[][3],int rows,int cols){
    int max_col = INT_MIN;
    for(int i=0; i<cols; i++){
        int sum = 0;
        for(int j=0; j<rows; j++){
            sum+=matrix[j][i];
        }
        max_col = max(max_col,sum);
    }
    return max_col;
}
int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;
    cout<<"max_col_sum is "<<max_col_sum(matrix,rows,cols);
    return 0;
}