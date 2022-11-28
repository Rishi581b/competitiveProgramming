#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        string a;
        string b;
        cin >> a >> b;
        int count = 0, count2 = 0;
        for (int i = 0; i < s; i++)
        {
            if (a[i] == '1')
            {
                count++;
            }
            if (b[i] == '1')
            {
                count2++;
            }
        }
        if (count == count2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}