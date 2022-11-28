#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, max = 0, sum = 0;
        cin >> a >> b;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int n = (a - b) + 1;
        for (int i = 0; i < n; i++)
        {
            int temp = i;
            for (int j = 0; j < b; j++)
            {
                sum = sum + arr[temp];
                temp++;
            }
            if (sum > max)
            {
                max = sum;
            }
            sum = 0;
        }
        cout << max << endl;
    }
}