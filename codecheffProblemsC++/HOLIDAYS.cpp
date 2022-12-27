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
        int n, w, ans = 0, count = 1;
        cin >> n >> w;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int sum = arr[n - 1];
        if (arr[n - 1] >= w)
        {
            ans = n - 1;
        }
        else
        {
            for (int i = n - 1; i > 0; i--)
            {
                sum = sum + arr[i - 1];
                count++;
                if (sum >= w)
                {
                    ans = n - count;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        cout << ans << "\n";
    }
}