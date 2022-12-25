#include <iostream>
#include <cmath>
#define ll long long
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
        int x, y;
        ll n, r, a, b;
        cin >> x >> y >> n >> r;
        b = (r - n * x) / (y - x);
        b = min(b, n);
        a = (n - b);
        if (r < n * x)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << a << " " << b << "\n";
        }
    }
}