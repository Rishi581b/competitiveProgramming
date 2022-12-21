#include <iostream>
#include <vector>
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

        int n, k, sum = 0;
        cin >> n >> k;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }
        for (int i = 0; i < n; i++)
        {
            while (k > 0)
            {
                v[i].first--;
                k--;
                if (v[i].first == 0)
                {
                    break;
                }
            }
            if (k == 0)
            {
                break;
            }
        }
        for (auto i : v)
        {
            sum = sum + (i.first * i.second);
        }
        cout << sum << "\n";
    }
}