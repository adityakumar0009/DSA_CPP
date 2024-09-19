#include<iostream>
#include<climits>  
using namespace std;
int smallest(int arr[], int size) {
    int smallest = INT_MAX;  
    for(int i = 0; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}
int largest(int arr[], int size) {
    int largest = INT_MIN;  
    for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
    int arr[] = {8, 7, 9, 3, 5};
    int size = 5;
    int minValue = smallest(arr, size);
    int maxValue = largest(arr, size);
    cout << "Smallest element is: " << minValue << endl;
    cout << "Largest element is: " << maxValue << endl;
    for(int i=0; i<size; i++){
        cout<<swap(minValue,maxValue);
    }
    return 0;
}
