#include<iostream>
using namespace std;
int diagonal_sum(int matrix[4][4], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                sum+=matrix[i][j];
            }
            else if(j==n-1-i){
                sum+=matrix[i][j];
            }
        }
    }
    return sum;
}
int main(){
    int matrix[4][4];
    int n = 4;
    //input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }
    //output
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"diagonal sum "<<diagonal_sum(matrix,n);
    return 0;
}