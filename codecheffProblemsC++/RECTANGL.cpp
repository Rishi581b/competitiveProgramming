#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && c == d)
        {
            cout << "YES\n";
        }
        else if (a == c && b == d)
        {
            cout << "YES\n";
        }
        else if (a == d && b == c)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}