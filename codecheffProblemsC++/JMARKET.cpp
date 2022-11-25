#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b, c;
        cin >> x >> a >> b >> c;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        int sum = v[0] + v[1];
        for (int i = 0; i < x - 2; i++)
        {
            sum = sum + v[0];
        }
        cout << sum << endl;
    }
}