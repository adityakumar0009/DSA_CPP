#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r,c;
    int arr[r][c];
    int max_ones = -1;
    int maxi = 0;
    for(int i=0; i<r; i++){
        int count = 0;
        for(int j=0; j<c; j++){
            cin>>arr[r][c];
            if(arr[i][j]==1){
                count = count+1;
            }
        }
        if(maxi<count){
            maxi = count;
            max_ones = i;
        }
    }
    cout<<max_ones+1<<endl;
    return 0;
}