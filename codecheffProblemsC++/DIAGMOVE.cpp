#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (abs(x) % 2 == 0 && abs(y) % 2 == 0)
        {
            cout << "YES\n";
        }
        else if (abs(x) % 2 != 0 && abs(y) % 2 != 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
