#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int temp, dtemp, hot, cold;
        cin >> temp >> dtemp >> hot >> cold;
        int ans = temp - dtemp;
        if (ans < 0)
        {
            if (abs(ans) <= hot)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else if (ans == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            if (ans <= cold)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}