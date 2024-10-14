#include<iostream>
#include<stack>
#include<climits>
using namespace std;
int largest_area_his(int arr[], int n){
    stack<int> s;
    int next[arr,n];
    int prev[arr,n];
    int area = INT_MIN;
    for(int i=0; i<n; i++){
        int l = arr[i];
        if (next[i] == -1) {
            next[i] = n;
        }
        int w = next[i]-prev[i]-1;
        int newArea = l*w;
        area = max(area,newArea);
    }
    return area;
}
int main(){
    int n = 6;
    int arr[] = {2,1,5,6,2,3};
    cout<<largest_area_his(arr,n);
    return 0;
}