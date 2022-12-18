#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        for (auto x : mp)
        {
            if (x.first % x.second != 0)
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}