#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number-> ";
    cin >> n;

    int mask = 0;
    int temp = n; // Store original value of n
    if (n == 0) { // Edge case
        cout << "Answer is -> " << 1 << endl;
        return 0;
    }
    while (temp != 0) {
        mask = (mask << 1) | 1; // Left shift with 1
        temp = temp >> 1;
    }
    int ans = (~n) & mask;
    cout << "Answer is -> " << ans << endl;

    return 0;
}
