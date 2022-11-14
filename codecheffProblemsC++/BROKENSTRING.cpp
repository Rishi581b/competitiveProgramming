#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        string s1, s2;
        cin >> s;
        int div = n / 2;
        for (int i = 0; i < n; i++)
        {
            if (i < div)
            {
                s1 += s[i];
            }
            else
            {
                s2 += s[i];
            }
        }
        if (s2.append(s1) == s)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}