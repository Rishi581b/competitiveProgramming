#include <bits/stdc++.h>
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
        int n, x;

        cin >> n >> x;
        int arr[n], sum = x;
        int max = sum;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
            if (max < sum)
            {
                max = sum;
            }
        }
        cout << max << "\n";
    }
}