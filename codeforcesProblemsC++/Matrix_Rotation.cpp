#include <iostream>
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
        int arr[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
        {
            cout << "YES\n";
        }

        else if (arr[0][0] > arr[0][1] && arr[1][0] > arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
        {
            cout << "YES\n";
        }
        else if (arr[0][0] > arr[0][1] && arr[1][0] > arr[1][1] && arr[0][0] > arr[1][0] && arr[0][1] > arr[1][1])
        {
            cout << "YES\n";
        }
        else if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] > arr[1][0] && arr[0][1] > arr[1][1])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}