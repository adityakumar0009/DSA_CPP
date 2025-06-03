#include<iostream>
#include<vector>
using namespace std;
vector<int> spartial_matrix(vector<vector<int>>& mat){
    vector<int> ans;
    int m = mat.size();
    int n = mat[0].size();
    int srow = 0;
    int erow = m-1;
    int scol = 0;
    int ecol = n-1;
    while(srow<=erow && scol<=ecol){
        //top
        for(int j=scol; j<=ecol; j++){
            ans.push_back(mat[srow][j]);
        }
        // right
        for(int i=srow+1; i<=erow; i++){
            ans.push_back(mat[i][ecol]);
        }
        // bottom
        for(int j=ecol-1; j>=scol; j--){
            if(srow==erow){
                break;
            }
            ans.push_back(mat[erow][j]);
        }
        //left
        for(int i=erow-1; i>srow; i--){
            if(scol==ecol){
                break;
            }
            ans.push_back(mat[i][scol]);
        }
        srow++;
        erow--;
        scol++;
        ecol--;
    }
    return ans;
}
int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans = spartial_matrix(mat);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}