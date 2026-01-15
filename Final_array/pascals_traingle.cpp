#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int rows){
    vector<vector<int>> result(rows);
    for(int i=0; i<rows; i++){
        result[i] = vector<int>(i+1,1);
        for(int j=1; j<i; j++){
            result[i][j] = result[i-1][j]+result[i-1][j-1];
        }
    }
    return result;
}
int main(){
    int rows = 5;
    vector<vector<int>> ans = generate(rows);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}