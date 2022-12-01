#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> m;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            m[v[i]]++;
        }
        vector<int> v2;
        for (auto x : m)
        {
            v2.push_back(x.second);
        }
        sort(v2.begin(), v2.end());

        int lastIndex = v2.size() - 1;
        int secondLast = v2.size() - 2;
        if (v2.size() == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (v2[lastIndex] > v2[secondLast])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
