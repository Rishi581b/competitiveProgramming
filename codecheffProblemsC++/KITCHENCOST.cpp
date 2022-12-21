#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, sum = 0;
        cin >> n >> x;
        int a1[n], a2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a2[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a1[i] >= x)
            {
                sum = sum + a2[i];
            }
        }
        cout << sum << "\n";
    }
}