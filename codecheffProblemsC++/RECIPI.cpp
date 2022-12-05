#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int r = arr[0];
        for (int i = 0; i < n; i++)
        {
            r = __gcd(arr[i], r);
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] / r << " ";
        }
        cout << "\n";
    }
}