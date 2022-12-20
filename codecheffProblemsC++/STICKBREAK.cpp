#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k, l;
        cin >> l >> k;
        if (l % k == 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << "1\n";
        }
    }
}