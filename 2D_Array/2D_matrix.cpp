#include<iostream>
using namespace std;
int main(){
    int matrix[4][3];
    int rows = 4;
    int columns = 3;
    //input
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>matrix[i][j];
        }
    }
    //output
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}