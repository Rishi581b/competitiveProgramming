#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, hr;
        cin >> a >> b >> c >> d >> e >> hr;
        int office_hr = a + b + c + d + e, home_hr = hr * office_hr;
        if (home_hr <= 120)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
}