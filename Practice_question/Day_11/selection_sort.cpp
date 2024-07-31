#include<iostream>
#include<algorithm> // Include for the swap function
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minindex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minindex]) {
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
}

int main() {
    int brr[4] = {3, 9, 1, 2};
    selection_sort(brr, 4);
    cout << "Sorted elements are -> ";
    for (int i = 0; i < 4; i++) {
        cout << brr[i] << " ";
    }
    return 0;
}
