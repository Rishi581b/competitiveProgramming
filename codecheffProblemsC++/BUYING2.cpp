#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, sum = 0, min = 100;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (min > arr[i])
            {
                min = arr[i];
            }
            sum = sum + arr[i];
        }
        if (sum % x >= min)
        {
            cout << -1 << "\n";
        }
        else
        {

            cout << sum / x << "\n";
        }
    }
}