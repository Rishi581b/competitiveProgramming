#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, r, c;
        cin >> a >> b;
        if (a % 2 != 0)
        {
            r = a / 2 + 1;
        }
        else if (a % 2 == 0)
        {
            r = a / 2;
        }
        if (b % 2 != 0)
        {
            c = b / 2 + 1;
        }
        else if (b % 2 == 0)
        {
            c = b / 2;
        }
        cout << r * c << "\n";
    }
}