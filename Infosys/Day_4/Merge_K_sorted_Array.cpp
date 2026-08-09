#include<iostream>
#include<vector>
#include<queue>
using namespace std;
priority_queue<int> pq;
int Kth_Smallest_Sorted_Matrix(vector<vector<int>>& arr,int k){
    priority_queue<int> pq;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            pq.push(arr[i][j]);

            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    return pq.top();
}
int main(){
    vector<vector<int>> arr = { {1, 5, 9},
                                {10, 11, 13},
                                {12, 13, 15} };
    int k;
    cin>>k;                            
    cout << "Kth Smallest Element in a Sorted Matrix "<<Kth_Smallest_Sorted_Matrix(arr,k);
    return 0;
}