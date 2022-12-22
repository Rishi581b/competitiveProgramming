#include <iostream>
#include <cmath>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
using namespace std;
int main()
{
    IOS int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        int b = (sqrt(n));
        cout << b * a << "\n";
    }
}