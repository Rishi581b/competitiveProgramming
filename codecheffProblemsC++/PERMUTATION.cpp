#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            while (arr[i] < i + 1)
            {
                count++;
                arr[i] = arr[i] + 1;
            }
            if (arr[i] == i + 1)
            {
                continue;
            }
            if (arr[i] > i + 1)
            {
                count = -1;
                break;
            }
        }
        cout << count << "\n";
    }
}