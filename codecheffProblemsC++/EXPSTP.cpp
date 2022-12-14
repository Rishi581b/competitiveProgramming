#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        int Xcost = abs(x2 - x1);
        int Ycost = abs(y2 - y1);
        int t_cost_in = Xcost + Ycost;
        int x = min(x1, min(y1, min(n - x1 + 1, n - y1 + 1)));
        int y = min(y2, min(x2, min(n - x2 + 1, n - y2 + 1)));
        int t_cost_out = x + y;

        cout << min(t_cost_in, t_cost_out) << "\n";
    }
}