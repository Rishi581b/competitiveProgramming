#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int last = n - 1;
        string s;
        if (n == 3)
        {
            s = "010";
            cout << s << endl;
        }
        else
        {
            cout << "1";
            for (int i = 1; i < n - 1; i++)
            {
                cout << "0";
            }
            cout << "1" << endl;
        }
    }
}