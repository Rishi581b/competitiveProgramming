#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int i = 1, changeday = 0, count = 1;
        while (i <= n / 5)
        {
            count = count + 5;
            if (k < count)
            {
                changeday++;
            }
            else if (k == count)
            {
                changeday = 0;
            }
            else if (k > n - 5)
            {
                changeday = 0;
            }

            else
            {
                continue;
            }
            i++;
        }
        cout << changeday << endl;
    }
}