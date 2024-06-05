#include<iostream>
#include<stack>
using namespace std;

int main() {
    string str = "aditya";
    stack<char> s;
    
    // Push all characters of the string onto the stack
    for(int i = 0; i < str.length(); i++) {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";
    
    // Pop characters from the stack to construct the reversed string
    while(!s.empty()) {
        char ch = s.top();
        s.pop();
        ans.push_back(ch);
    }

    cout << "Reversed string is " << ans << endl;

    return 0;
}
