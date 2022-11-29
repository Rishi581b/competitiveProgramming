#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum1 = a + b, sum2 = b + c, sum3 = a + c;
        if (sum1 % 2 == 0 && sum2 % 2 == 0 && sum3 % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}