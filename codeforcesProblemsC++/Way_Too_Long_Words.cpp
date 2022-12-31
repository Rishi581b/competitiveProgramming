#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int so = s.size();
        if (s.size() > 10)
        {
            cout << s[0] << so - 2 << s[so - 1] << "\n";
        }
        else
        {
            cout << s << "\n";
        }
    }
}