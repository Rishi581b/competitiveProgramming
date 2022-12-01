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
        string s, s1, s2;
        cin >> s;
        int n = s.length() / 2;
        int size = s.length();
        if (size % 2 == 0)
        {
            s1 = s.substr(0, n);
            s2 = s.substr(n, size);
        }
        else
        {
            s1 = s.substr(0, n);
            s2 = s.substr(n + 1, size);
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}