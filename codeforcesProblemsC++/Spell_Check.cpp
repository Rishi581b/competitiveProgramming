#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        string s, t = "Timru";
        cin >> s;

        sort(s.begin(), s.end());
        if (n > 5)
        {
            cout << "NO\n";
        }
        else if (n == 5 && s == t)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}