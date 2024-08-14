#include<iostream>
using namespace std;

void col_sum(int arr[][4], int rows, int columns) {
    for(int column = 0; column < columns; column++) {
        int sum = 0;
        for(int row = 0; row < rows; row++) {
            sum += arr[row][column];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    int arr[3][4];
    int rows = 3, columns = 4;
    
    // Taking inputs
    cout << "Enter the elements of the array:" << endl;
    for(int row = 0; row < rows; row++) {
        for(int column = 0; column < columns; column++) {
            cin >> arr[row][column];
        }
    }
    
    // Displaying the array
    cout << "The array is:" << endl;
    for(int row = 0; row < rows; row++) {
        for(int column = 0; column < columns; column++) {
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }
    
    // Calculating and displaying the sum of each column
    cout << "The sum of columns are -> ";
    col_sum(arr, rows, columns);
    
    return 0;
}
