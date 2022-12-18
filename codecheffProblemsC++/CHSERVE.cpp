#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, k;
        cin >> a >> b >> k;
        if ((a + b) % (2 * k) < k)
        {
            cout << "CHEF\n";
        }
        else
        {
            cout << "COOK\n";
        }
    }
}