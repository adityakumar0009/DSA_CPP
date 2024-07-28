#include<iostream>
using namespace std;

int intersection(int arr[], int n, int m, int brr[]) {
    int i = 0;
    int j = 0;
    // int ans = 0;
    while (i < n && j < m) {
        if (arr[i] == brr[j]) {
            cout<<arr[i]<<" ";
            // ans = arr[i];
            i++;
            j++;
        } else if (arr[i] < brr[j]) {
            i++;
        } else {
            j++;
        }
    }
    // return ans;
}

int main() {
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {3, 4, 5, 6};
    intersection(arr1, 4, 4, arr2);
    // cout  << ans << endl;
    return 0;
}
