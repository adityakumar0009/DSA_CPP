#include<iostream>
using namespace std;
bool is_linear(int matrix[][3],int rows,int cols,int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows = 4;
    int cols = 3;
    int key = 8;
    if(is_linear(matrix,rows,cols,key)){
        cout<<"element is found "<<endl;
    }
    else{
        cout<<"element is not found "<<endl;
    }
    return 0;
}