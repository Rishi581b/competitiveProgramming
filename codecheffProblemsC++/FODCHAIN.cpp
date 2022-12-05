#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int e, k;
        cin >> e >> k;
        int res = e, count = 0;
        while (res != 0)
        {
            res = res / k;
            count++;
        }
        cout << count << "\n";
    }
}