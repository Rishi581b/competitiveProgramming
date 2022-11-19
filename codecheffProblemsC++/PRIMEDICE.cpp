#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        if (sum == 2)
        {
            cout << "alice" << endl;
        }
        else if (sum == 3)
        {
            cout << "alice" << endl;
        }
        else if (sum > 2 && sum % 2 == 0)
        {
            cout << "bob" << endl;
        }
        else if (sum > 3 && sum % 3 == 0)
        {
            cout << "bob" << endl;
        }
        else
        {
            cout << "alice" << endl;
        }
    }
    return 0;
}