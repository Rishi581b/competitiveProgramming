#include <iostream>
#include <cstring>
#include <algorithm>
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
        int n;
        cin >> n;
        string s, s2;
        cin >> s;
        cin >> s2;
        sort(s.begin(), s.end());
        sort(s2.begin(), s2.end());
        int c = s.find('1');
        int c2 = s2.find('1');
        if (c == c2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}