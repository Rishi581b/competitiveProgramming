#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, count = 3;
        cin >> x >> y >> z;
        int mul = x * y;
        while (count < x)
        {
            mul = mul + z;
            count = count + 3;
        }
        cout << mul << "\n";
    }
}