#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int column;
    cin>>column;
    int a[row][column];
    int b[row][column];
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>b[i][j];
        }
    }
    //Addition
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}