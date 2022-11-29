#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int ans = (x / 25);
        if (x % 25 == 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << ans + 1 << endl;
        }
    }
}