#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int res;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second % 2 != 0)
            {
                cout << i.first << endl;
                break;
            }
            else
            {
                continue;
            }
        }
    }
}