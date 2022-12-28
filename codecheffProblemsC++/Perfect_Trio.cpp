#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == (b + c))
        {
            cout << "YES\n";
        }
        else if (b == (a + c))
        {

            cout << "YES\n";
        }
        else if (c == (b + a))
        {

            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
