#include <iostream>
#include <iomanip>
#include <algorithm>
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
        float total = 0, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        total = (n * (n - 1)) / 2;
        sort(arr, arr + n);
        float max = arr[n - 1] + arr[n - 2];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] + arr[j] == max)
                {
                    count++;
                }
            }
        }
        float ans = count / total;
        cout << fixed << setprecision(8) << ans << "\n";
    }
}