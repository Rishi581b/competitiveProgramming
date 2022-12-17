#include <iostream>
using namespace std;
int sum(int a)
{
    int s = 0;
    while (a != 0)
    {
        s = a % 10 + s;
        a = a / 10;
    }
    return s;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (sum(n) % 2 == 0)
        {
            while (sum(n) % 2 == 0)
            {
                n++;
            }
        }
        else
        {
            while (sum(n) % 2 != 0)
            {
                n++;
            }
        }
        cout << n << "\n";
    }
}