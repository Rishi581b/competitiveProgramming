#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <cstring>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<string> v;
        map<string, ll> m;
        for (int i = 0; i < n; i++)
        {
            string s1;
            s1 = s1 + s[i];
            while (i + 1 < n && s[i] == s[i + 1])
            {
                s1 += s[i];
                i++;
            }
            v.push_back(s1);
        }
        ll a = 0, t = 0, a1 = 0;
        for (int i = 0; i < v.size(); i++)
        {
            m[v[i]]++;
            ll p = v[i].size();
            a1 = max(a1, p);
            t = max(t, m[v[i]]);
        }
        if (t > 1)
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (m[v[i]] > 1)
                {
                    ll p = v[i].size();
                    a = max(a, p);
                }
            }
        }
        cout << max(a1 - 1, a) << "\n";
    }
}
