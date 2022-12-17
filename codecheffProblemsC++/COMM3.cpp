#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r;
        cin >> r;
        int x1, x2, y1, y2, x3, y3;
        float d1, d2, d3;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        d1 = (float)sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
        d2 = (float)sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
        d3 = (float)sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
        if ((d1 + d2 <= 2 * r) || (d1 + d3 <= 2 * r) || (d2 + d3 <= 2 * r))
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}