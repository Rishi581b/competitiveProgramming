#include <iostream>
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
        int n, x;
        cin >> n >> x;
        if (x >= 0 && x <= n)
        {
            cout << x << "\n";
        }
        else if (x > n)
        {
            while (x > n)
            {
                x = x - n - 1;
            }
            cout << x << "\n";
        }
    }
}