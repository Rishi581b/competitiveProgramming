#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        long long atleast = n * (n + 1) / 2;
        if (atleast > k)
        {
            cout << "-1"
                 << "\n";
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << "1 ";
            }
            k = k - (atleast - 1);
            cout << k << "\n";
        }
    }
}