#include <iostream>
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int maxcount = 1, res = arr[0], curr_count = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                curr_count++;
            }
            else
            {
                curr_count = 1;
            }
            if (curr_count > maxcount)
            {
                maxcount = curr_count;
                res = arr[i - 1];
            }
        }
        if (maxcount == n / 2 && n != 3)
        {
            cout << n / 2 << endl;
        }
        else if (maxcount == n)
        {
            cout << "0" << endl;
        }
        else if (maxcount == 1)
        {
            cout << n - 1 << endl;
        }
        else
        {
            cout << n - maxcount << endl;
        }
    }
}