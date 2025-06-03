#include<iostream>
#include<climits>
using namespace std;
int max_row_sum(int matrix[][3],int rows,int cols){
    int max_sum = INT_MIN;
    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum+=matrix[i][j];
        }
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}
int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;
    cout<<"maximum_row_sum is "<<max_row_sum(matrix,rows,cols);
    return 0;
}