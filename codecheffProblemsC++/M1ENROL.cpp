#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, sum;
        cin >> x >> y;
        if (x > y || x == y)
        {
            sum = 0;
        }
        else
        {
            sum = y - x;
        }
        cout << sum << endl;
    }
}