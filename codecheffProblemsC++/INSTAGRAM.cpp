#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x > 10 * y)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
