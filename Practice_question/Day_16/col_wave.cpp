#include<iostream>
using namespace std;

void col_wave(int arr[][4], int row, int column) {
    for(int col = 0; col < column; col++) {
        if(col & 1) {
            // Odd case -> Bottom to up
            for(int r = row - 1; r >= 0; r--) {
                cout << arr[r][col] << " ";
            }
        } else {
            // Even case -> Top to bottom
            for(int r = 0; r < row; r++) {
                cout << arr[r][col] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int arr[3][4];
    // Input the array elements
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cin >> arr[row][col];
        }
    }
    // Output the array elements
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // Call the column wave function
    col_wave(arr, 3, 4);
    
    return 0;
}
