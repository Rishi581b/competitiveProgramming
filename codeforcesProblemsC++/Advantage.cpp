#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n], b;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            b = arr[i];
            v1.push_back(b);
        }
        sort(v1.begin(), v1.end());
        ll temp = v1[n - 1], s, temp2 = v1[n - 2];
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == temp)
            {
                s = temp - temp2;
            }
            else
            {
                s = arr[i] - temp;
            }
            v2.push_back(s);
        }
        for (auto x : v2)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}