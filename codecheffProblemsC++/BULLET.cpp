#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int div = y / x;
        int ans = z - div;
        if (ans < 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}