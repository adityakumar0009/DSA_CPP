#include<iostream>
#include<vector>
using namespace std;
vector<int> get_row(int row_index){
    vector<int> row(row_index+1,1);
    for(int i=1; i<row_index+1; i++){
        for(int j=i-1; j>=1; j--){
            row[j] = row[j] + row[j-1];
        }
    }
    return row;
}
int main(){
    int row_index = 3;
    vector<int> ans = get_row(row_index);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}