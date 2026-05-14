#include <iostream>
using namespace std;
string encypt_decrypt(string s, char ch)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = s[i] ^ ch;
    }
    return s;
}
int main()
{
    string s;
    char ch;
    cout << "Enter string ";
    getline(cin, s);
    cout << "Enter char ";
    cin >> ch;
    cout << "After encrypt the string is " << encypt_decrypt(s, ch);
    return 0;
}