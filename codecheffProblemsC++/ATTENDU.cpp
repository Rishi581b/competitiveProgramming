#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = 0, count1 = 0;
        count1 = count(s.begin(), s.end(), '1');
        res = count1 + (120 - n);
        if (res >= 90)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}