#include <iostream>
#include <algorithm>
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
        ll n, c0 = 0, cneg = 0, sum = 0, sum2 = 0;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                cneg++;
            }
            else if (arr[i] == 0)
            {
                c0++;
            }
        }
        sort(arr, arr + n);
        for (ll i = cneg - 1; i > 0; i--)
        {
            sum = sum + i;
        }
        ll cpos = n - (cneg + c0);
        for (ll i = cpos - 1; i > 0; i--)
        {
            sum2 = sum2 + i;
        }
        cout << sum + sum2 << "\n";
    }
}