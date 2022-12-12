#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        long long p = 1, x;
        for (int i = 0; i < a; i++)
        {
            cin >> x;
            p = p * x;
            p = p % b;
        }
        if (p == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}