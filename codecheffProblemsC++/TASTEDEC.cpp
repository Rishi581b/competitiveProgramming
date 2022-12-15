#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int chocolate = 2 * x, candy = 5 * y;
        if (chocolate > candy)
        {
            cout << "Chocolate\n";
        }
        else if (chocolate == candy)
        {
            cout << "Either\n";
        }
        else
        {
            cout << "Candy\n";
        }
    }
}