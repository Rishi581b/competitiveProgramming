#include <iostream>
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
        ll n, even = 0;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even = even + 1;
            }
            else
            {
                continue;
            }
        }
        if (even == n)
        {
            cout << "0\n";
        }
        else
        {
            cout << even << "\n";
        }
    }
}