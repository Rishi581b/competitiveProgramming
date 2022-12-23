#include <iostream>
#define ll long long int
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
        ll a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b >= a + 2)
        {
            cout << a << " " << a + 2 << "\n";
        }
        else if (a % 3 == 0 && b >= a + 3)
        {
            cout << a << " " << a + 3 << "\n";
        }
        else if (b >= a + 3)
        {
            cout << a + 1 << " " << a + 3 << "\n";
        }
        else
        {
            cout << "-1"
                 << "\n";
        }
    }
}