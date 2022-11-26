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
        int n, count = 0, countelse = 0;

        long long a, x;
        cin >> n >> x;
        vector<long long int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (x > v[i])
            {
                count++;
                break;
            }
            else
            {
                count++;
                countelse++;
            }
        }
        if (countelse == n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n - count + 1 << endl;
        }
    }
}