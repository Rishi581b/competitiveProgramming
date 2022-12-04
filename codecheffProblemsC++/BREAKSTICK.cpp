#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 != 0 && x % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 != 0 && x % 2 == 0)
        {
            cout << "NO" << endl;
        }
    }
}