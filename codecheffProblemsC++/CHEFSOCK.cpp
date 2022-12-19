#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll div = (c - a) / b;
    if (div % 2 == 0)
    {
        cout << "Lucky Chef\n";
    }
    else
    {
        cout << "Unlucky Chef\n";
    }
}