#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b;
        cin >> a >> b;
        int sum = a + b;
        if (sum % 2 != 0)
        {
            cout << "-1\n";
        }
        else
        {
            cout << sum / 2 << "\n";
        }
    }
}