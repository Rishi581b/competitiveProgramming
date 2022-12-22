#include <iostream>
#include <cmath>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
using namespace std;
int main()
{
    IOS int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "YES\n";
        }
        else if (b % a == 0)
        {
            cout << "YES\n";
        }
        else if (a <= b / 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}