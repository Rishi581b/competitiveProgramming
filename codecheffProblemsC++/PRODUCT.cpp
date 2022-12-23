#include <iostream>
#define ll long long int
using namespace std;
ll hcf(ll b, ll c)
{
    if (b == c)
    {
        return b;
    }
    else
    {
        if (b > c)
        {
            return hcf(c, b - c);
        }
        else
        {
            return hcf(b, c - b);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll b, c;
        cin >> b >> c;
        ll temp = hcf(b, c);
        cout << c / temp << "\n";
    }
}