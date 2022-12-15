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
        if (y % z != 0)
        {
            cout << x * ((y / z) + 1) << "\n";
        }
        else if (y % z == 0)
        {
            cout << x * (y / z) << "\n";
        }
        else
        {
            cout << x << "\n";
        }
    }
}