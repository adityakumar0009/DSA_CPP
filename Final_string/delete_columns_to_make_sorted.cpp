#include<iostream>
#include<vector>
using namespace std;
int min_delete(vector<string>& strs){
    int n = strs.size();
    int k = strs[0].size();
    int count = 0;
    for(int j=0; j<k; j++){
        for(int i=1; j<n; j++){
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
    cout<<"Minimum delete column is "<<min_delete(strs);
    return 0;
}