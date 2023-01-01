#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp = arr[k - 1], count = 0;
    if (temp == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                count++;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= temp)
            {
                count++;
            }
        }
    }
    cout << count << "\n";
}