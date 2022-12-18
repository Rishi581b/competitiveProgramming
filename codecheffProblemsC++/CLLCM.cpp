#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, flag = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                cout << "NO\n";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            if (n == 1)
            {
                cout << "YES\n";
            }
            else if (sum % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}