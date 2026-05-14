#include<iostream>
#include<vector>
using namespace std;
int Delete_column(vector<string>& strs){
    int n = strs.size();
    int k = strs[0].size();
    int count = 0;
    for(int j=0; j<k; j++){
        for(int i=1; i<n; i++){
            if(strs[i][j]<strs[i-1][j]){
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    vector<string> strs = {"cba", "daf", "ghi"};
    cout<<"The number of columns that you will delete is "<<Delete_column(strs);
    return 0;
}