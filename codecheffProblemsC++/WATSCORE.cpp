#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, sum = 0;
        cin >> n;
        int arr[12] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            arr[a] = max(arr[a], b);
        }
        for (int i = 0; i <= 8; i++)
        {
            sum = sum + arr[i];
        }
        cout << sum << endl;
    }
}