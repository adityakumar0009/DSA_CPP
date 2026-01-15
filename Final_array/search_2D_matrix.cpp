#include<iostream>
#include<vector>
using namespace std;
bool search_matrix(vector<vector<int>>& matrix,int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int st = 0;
    int end = row*col-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        int element = matrix[mid/col][mid%col];
        if(element==target){
            return 1;
        }
        else if(element<target){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return 0;
}
int main(){
    vector<vector<int>> matrix = { {1, 3, 5, 7},
                                   {10, 11, 16, 20},
                                   {23, 30, 34, 60}};
    int target = 11;
    if(search_matrix(matrix,target)){
        cout<<"Element is present in matrix"<<endl;
    }                               
    else{
        cout<<"Element is not present in matrix"<<endl;
    }
    return 0;
}