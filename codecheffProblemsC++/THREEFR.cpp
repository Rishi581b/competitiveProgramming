#include <iostream>
using namespace std;
int maxi(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) == 2 * maxi(a, b, c))
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}