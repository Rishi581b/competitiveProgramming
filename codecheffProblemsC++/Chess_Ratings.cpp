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
        while (x < y)
        {
            x = x + 8;
            count++;
        }
        cout << count << endl;
    }
}