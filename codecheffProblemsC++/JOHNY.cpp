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
        int n, k, ans = 0;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        int temp = k - 1;
        ll mynum = arr[temp];
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mynum)
            {
                ans = i + 1;
            }
        }
        cout << ans << "\n";
    }
}