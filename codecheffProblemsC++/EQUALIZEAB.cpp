#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
        {
            flag = 1;
        }
        else if ((a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0))
        {
            flag = 0;
        }
        else if (b > a)
        {
            if (((b - a) / 2) % c == 0)
            {
                flag = 1;
            }
        }
        else if (a > b)
        {
            if (((a - b) / 2) % c == 0)
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}