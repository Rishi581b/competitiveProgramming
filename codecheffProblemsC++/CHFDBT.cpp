#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << "\n";
        }
        else
        {
            cout << (n / 2) + 1 << "\n";
        }
    }
}