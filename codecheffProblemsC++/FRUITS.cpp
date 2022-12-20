#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k, count = 0;
        cin >> a >> b >> k;
        if (a > b)
        {
            while (k--)
            {
                b++;
                if (b == a)
                {
                    break;
                }
            }
            count = a - b;
        }
        else if (b > a)
        {
            while (k--)
            {
                a++;
                if (a == b)
                {
                    break;
                }
            }
            count = b - a;
        }
        else if (a == b)
        {
            count = 0;
        }
        cout << count << "\n";
    }
}