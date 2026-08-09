#include<vector>
#include<queue>
#include<iostream>
using namespace std;
vector<vector<int>> Kth_closest_point(vector<vector<int>>& arr,int k){
    priority_queue<pair<int,vector<int>>> pq;
    for(int i=0; i<arr.size(); i++){
        int x = arr[i][0];
        int y = arr[i][1];
        int distance = x*x + y*y;
        pq.push({distance,arr[i]});
        if(pq.size()>k){
            pq.pop();
        }
    }
    vector<vector<int>> result;
    while(pq.size()>0){
        result.push_back(pq.top().second);
        pq.pop();
    }
    return result;
}
int main(){
    vector<vector<int>> arr = {{1,3},{2,-2}};
    int k = 1;
    vector<vector<int>> closest = Kth_closest_point(arr,k);
    for(auto& point : closest) {
        cout << point[0] << " " << point[1] << endl;
    }
    return 0;
}