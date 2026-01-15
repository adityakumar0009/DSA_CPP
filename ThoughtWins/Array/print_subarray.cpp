#include<iostream>
#include<vector>
using namespace std;
int print_subarray(vector<int>& arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<k<< " ";
            }
        }
        cout<<endl;
    }
}
int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<print_subarray(arr);
    return 0;
}