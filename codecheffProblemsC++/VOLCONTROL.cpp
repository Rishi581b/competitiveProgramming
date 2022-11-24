#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, count = 0;
        cin >> x >> y;
        for (int i = x; i < y; i++)
        {
            count++;
        }
        for (int j = x; j > y; j--)
        {
            count++;
        }
        cout << count << "\n";
    }
}