#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, z;
        cin >> a >> b >> c >> z;
        if (((c * z) + a) > b)
        {
            cout << "overflow" << endl;
        }
        else if (((c * z) + a) == b)
        {
            cout << "filled" << endl;
        }
        else if (((c * z) + a) < b)
        {
            cout << "unfilled" << endl;
        }
    }
}