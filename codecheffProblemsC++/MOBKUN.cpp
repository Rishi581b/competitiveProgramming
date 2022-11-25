#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, x;
        cin >> n >> m >> k >> x;
        int temp = n * k + m;
        int w = n * (k - 1);
        int div = x % temp;
        if (div != 0 && (div - w) <= 0)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}