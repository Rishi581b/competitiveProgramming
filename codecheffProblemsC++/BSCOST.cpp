#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, count = 0, count2 = 0, flag = 0;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        int miin = min(x, y);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
            else if (s[i] == '1')
            {
                count2++;
            }
        }
        if (count == n || count2 == n)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << miin << endl;
        }
    }
}