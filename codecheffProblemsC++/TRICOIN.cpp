#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, sum = 0;
        int count = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
            if (sum <= n)
            {
                count++;
            }
            else if (sum > n)
            {
                break;
            }
        }
        cout << count << "\n";
    }
}