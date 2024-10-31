#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int lcm(int a, int b){
    int lcm = (a * b) / gcd(a, b);
    return lcm;
}
int main()
{
    int a = 20;
    int b = 28;
    cout << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;
    return 0;
}