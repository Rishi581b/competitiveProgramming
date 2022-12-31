#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, ans = 0;
    cin >> t;
    while (t--)
    {
        int a, b, c, count = 0;
        cin >> a >> b >> c;
        if (a == 1)
        {
            count++;
        }
        if (b == 1)
        {
            count++;
        }
        if (c == 1)
        {
            count++;
        }
        if (count >= 2)
        {
            ans++;
        }
    }
    cout << ans << "\n";
}