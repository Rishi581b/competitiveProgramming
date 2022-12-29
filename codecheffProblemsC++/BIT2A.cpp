#include <iostream>
#include <cstring>
#include <algorithm>
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
        int n, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            count = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    count++;
                }
            }
            cout << count << " ";
        }
        cout << "\n";
    }
}