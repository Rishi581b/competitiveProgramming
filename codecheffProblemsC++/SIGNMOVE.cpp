#include <iostream>
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
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << "\n";
        }
        else
        {
            cout << -(n + 1) / 2 << "\n";
        }
    }
}