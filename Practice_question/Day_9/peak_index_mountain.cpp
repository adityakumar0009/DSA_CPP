#include<iostream>
using namespace std;

int peak_mountain(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start; // or return end; as both should be the same at the end
}

int main() {
    int ans[5] = {1, 3, 5, 7, 9};
    cout << "Peak index is -> " << peak_mountain(ans, 5);
    return 0;
}
