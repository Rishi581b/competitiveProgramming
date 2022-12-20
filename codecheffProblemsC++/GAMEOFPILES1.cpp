#include <iostream>
#define ll long long
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
        int n, temp = 0;
        ll sum = 0;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                temp = 1;
            }
            sum = sum + arr[i];
        }
        if (temp)
        {
            cout << "CHEF\n";
        }
        else if (sum % 2 == 0)
        {
            cout << "CHEFINA\n";
        }
        else
        {
            cout << "CHEF\n";
        }
    }
}