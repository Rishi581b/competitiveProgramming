#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp = 0, count = 0;
        int m = INT_MIN;
        cin >> n;
        int arr[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0 || arr2[i] == 0)
            {
                count = 0;
            }
            else
                count++;
            {
                if (count > temp)
                {
                    temp = count;
                }
            }
        }
        cout << temp << "\n";
    }
}
