#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        float x = pow((0.143 * n), n);
        if (x - floor(x) < 0.5)
        {
            cout << floor(x) << "\n";
        }
        else
        {
            cout << floor(x) + 1 << "\n";
        }
    }
}