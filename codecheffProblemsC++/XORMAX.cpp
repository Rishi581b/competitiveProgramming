#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, ans = "";
        cin >> s1 >> s2;
        int one = 0, zero = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
            if (s2[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        int m = min(one, zero);
        for (int i = 0; i < m; i++)
        {
            cout << '1';
        }
        for (int i = m; i < s1.length(); i++)
        {
            cout << '0';
        }
        cout << "\n";
    }
}