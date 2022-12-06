#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float s, a, b, c, finalp = 0, loses = 0, gain = 0;
        cin >> s >> a >> b >> c;
        if (c < 0)
        {
            c = abs(c);
            loses = (c / 100) * s;
            finalp = s - loses;
            if (finalp >= a && finalp <= b)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else if (c > 0)
        {
            gain = (c / 100) * s;
            finalp = s + gain;
            if (finalp >= a && finalp <= b)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else if (c == 0)
        {
            finalp = s;
            if (finalp > a && finalp < b)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
}