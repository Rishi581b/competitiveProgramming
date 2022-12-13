#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int sum = 0, div = pow(2, x);
        for (int i = 0; i < n; i++)
        {
            div = div / 2;
            sum = sum + div;
        }
        cout << pow(2, x) - sum << "\n";
    }
}