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
        int n, min = INT_MAX, res = 0, flag = 0;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % min != 0)
            {
                flag = 0;
                break;
            }
            if (arr[i] % min == 0 && arr[i] != min)
            {
                res++;
                flag = 1;
            }
            else if (arr[i] == min)
            {
                continue;
            }
        }
        if (flag == 1)
        {
            cout << res << "\n";
        }
        else
        {

            cout << n << "\n";
        }
    }
}