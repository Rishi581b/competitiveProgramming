#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, top, top2, max = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        top2 = arr[0] + arr[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            top = arr[i] + arr[i + 1];
            if (top > max)
            {
                max = top;
            }
            if (top2 > max)
            {
                max = top2;
            }
        }
        cout << max << endl;
    }
}