#include<iostream>
#include<vector>
using namespace std;
bool is_Safe(vector<vector<char>> &board, int row, int column, int digit){
    //horizontal
    for(int j=0; j<9; j++){
        if(board[row][j]==digit){
            return false;
        }
    }
    //vertical
    for(int i=0; i<9; i++){
        if(board[i][column]==digit){
            return false;
        }
    }
    //grid
    int s_row = (row/3)*3;
    int s_col = (column/3)*3;
    for(int i=s_row; i<=s_row+2; i++){
        for(int j=s_col; j<=s_col+2; j++){
            if(board[i][j]==digit){
                return false;
            }
        }
    }
    return true;
}
bool helper(vector<vector<char>> &board, int row, int column){
    if(row==9){
        return true;
    }
    int next_row = row;
    int next_column = column+1;
    if(next_column==9){
        next_row = row+1;
        next_column = 0;

    }
    if(board[row][column]!='.'){
        return helper(board,next_row,next_column);
    }
    for (char digit = '1'; digit <= '9'; digit++)
    {
        if (is_Safe(board, row, column, digit))
        {
            board[row][column] = digit;
            if (helper(board, next_row, next_column))
            {
                return true;
            }
            board[row][column] = '.';
        }
    }
    return false;
}
void print_Board(const vector<vector<char>> &board){
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[i].size(); j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                  {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                  {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                  {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                  {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                  {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                  {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                  {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                  {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    if(helper(board,0,0)){
        cout<<"solved sudoko problem"<<endl;
        print_Board(board);
    }
    else{
        cout<<"sudoko problem not solved"<<endl;
    }
        return 0;
}