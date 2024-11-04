#include<iostream>
#include<climits>
using namespace std;
int getcolsum(int matrix[][3], int rows, int columns){
    int max_col_sum = INT_MIN;
    for(int i=0; i<rows; i++){
        int col_sum = 0;
        for(int j=0; j<columns; j++){
            col_sum+=matrix[i][j];
        }
        max_col_sum=max(max_col_sum,col_sum);
    }
    return max_col_sum;
}
int main(){
    int matrix[3][3];
    int rows = 3;
    int columns = 3;
    //input
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>matrix[i][j];
        }
    }
    //output
    for(int j=0; j<columns; j++){
        for(int i=0; i<rows; i++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"max column sum "<<getcolsum(matrix,rows,columns);
    return 0;
}