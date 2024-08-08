#include<iostream>
using namespace std;

char max_occ(string s) {
    int arr[26] = {0};
    
    // Create an array of count of characters
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int number = 0;
        
        // Lowercase
        if (ch >= 'a' && ch <= 'z') {
            number = ch - 'a';
        }
        // Uppercase
        else if (ch >= 'A' && ch <= 'Z') {
            number = ch - 'A';
        }
        
        arr[number]++;
    }
    
    // Find max occurring character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    
    char finalAns = 'a' + ans;
    return finalAns;
}

int main() {
    string s;
    cin >> s;
    cout << max_occ(s) << endl;
    return 0;
}
