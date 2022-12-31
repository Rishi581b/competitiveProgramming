#include <iostream>
#include <climits>
#include <unordered_map>
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
        int n;
        cin >> n;
        ll arr[n], sum = 0;
        ll max = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (auto x : mp)
        {
            if (x.second > max)
            {
                max = x.second;
            }
        }
        for (auto x : mp)
        {
            sum = sum + x.second;
        }
        cout << sum - max << "\n";
    }
}