#include <iostream>
#include <cmath>
using namespace std;
int prime(int a)
{
    if (a == 2)
    {
        return 1;
    }
    if (a < 2)
    {
        return 0;
    }
    if (a % 2 == 0)
    {
        return 0;
    }
    for (int i = 3; i < sqrt(a) + 1; i += 2)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            if (prime(j) == 1)
            {
                cout << j << "\n";
            }
        }
    }
}