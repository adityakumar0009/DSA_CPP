#include<iostream>
#include<vector>
using namespace std;
bool search_2D(vector<vector<int>>& matrix,int target){
    int row = matrix.size();
    int column = matrix[0].size();
    int st = 0;
    int end = row*column-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        int element = matrix[mid/column][mid%column];
        if(element == target){
            return true;
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
int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7},
                                  {10, 11, 16, 20},
                                  {23, 30, 34, 60},
                                };
    int target = 16;
    if(search_2D(matrix,target)){
        cout<<"element is found in the matrix"<<endl;
    }                            
    else{
        cout<<"element not found in the matrix"<<endl;
    }
    return 0;
}