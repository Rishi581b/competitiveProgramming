#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll n, q, t, min = 1000000000, max = 0;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    while (q--)
    {
        cin >> t;
        if (t >= min && t <= max)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}