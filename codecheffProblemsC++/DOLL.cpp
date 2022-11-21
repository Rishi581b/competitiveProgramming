#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < k)
            {
                count++;
            }
            else if (arr[i] == k)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << n - count << endl;
    }
}