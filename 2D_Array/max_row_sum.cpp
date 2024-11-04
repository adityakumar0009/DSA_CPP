#include<iostream>
#include<climits>
using namespace std;
int getmaxsum(int matrix[3][3],int rows, int columns){
    int max_row = INT_MIN;
    for(int i=0; i<rows; i++ ){
        int max_row_sum = 0;
        for(int j=0; j<columns; j++){
            max_row_sum+=matrix[i][j];
        }
        max_row=max(max_row,max_row_sum);
    }
    return max_row;
}
int main(){
    int matrix[3][3];
    int rows = 3;
    int columns = 3;
    // input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // output
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout<<getmaxsum(matrix,rows,columns);
    return 0;
}