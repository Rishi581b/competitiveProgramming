#include <iostream>
using namespace std;
void sol()
{
    long long n;
    int k;
    cin >> n >> k;
    if ((n % 2 == 0) || (k == 1))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
}