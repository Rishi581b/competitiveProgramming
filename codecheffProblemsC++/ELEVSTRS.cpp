#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b, c;
        float elev_time, stairs_time;
        cin >> a >> b >> c;
        elev_time = (a / c) * 2;
        stairs_time = (a * 1.414) / b;
        if (elev_time > stairs_time)
        {
            cout << "Stairs\n";
        }
        else
        {
            cout << "Elevator\n";
        }
    }
}