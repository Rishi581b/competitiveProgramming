#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int max = arr[0];
        for (int i = 0; i < 3; i++)
        {
            if (max > arr[i + 1])
            {
                max = max;
            }
            else
            {
                max = arr[i + 1];
            }
        }
        cout << max << endl;
    }
}