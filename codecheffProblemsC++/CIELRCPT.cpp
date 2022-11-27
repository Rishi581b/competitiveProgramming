#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[12] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
        int p, count = 0, sum = 0;
        cin >> p;
        int i = 11;
        for (int i = 11; i >= 0; i--)
        {
            if (arr[i] == p)
            {
                count = 1;
                break;
            }
            if (arr[i] < p && sum < p)
            {
                sum = sum + arr[i];
                count = count + 1;
                while (sum < p)
                {
                    sum = sum + arr[i];
                    count = count + 1;
                }
                if (sum > p)
                {
                    sum = sum - arr[i];
                    count = count - 1;
                }
            }
        }
        cout << count << endl;
    }
}