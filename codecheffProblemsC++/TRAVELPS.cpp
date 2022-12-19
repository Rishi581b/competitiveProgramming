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
        int n, a, b, sum = 0;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int f = s.find('1') + 1;
        if (f == 0)
        {
            cout << n * a << "\n";
        }
        else
        {
            cout << ((f - 1) * a) + (n - f + 1) * b << "\n";
        }
    }
}