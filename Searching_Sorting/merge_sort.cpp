#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& num1, int m, vector<int>& num2, int n){
    int index = m+n-1;
    int i = m-1;
    int j = n-1;
    while(i>=0 && j>=0){
        if(num1[i]>=num2[j]){
            num1[index] = num1[i];
            index--;
            i--;
        }
        else{
            num1[index] = num2[j];
            index--;
            j--;
        }
    }
    while(j>=0){
        num1[index] = num2[j];
        index--;
        j--;
    }
}
int main(){
    vector<int> num1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> num2 = {2,5,6};
    int n = 3;
    merge(num1,m,num2,n);
    for(int i=0; i<m+n; i++){
        cout<<num1[i]<<" ";
    }
    cout<<endl;
    return 0;
}