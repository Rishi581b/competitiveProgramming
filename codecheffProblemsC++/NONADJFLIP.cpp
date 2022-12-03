#include <iostream>
#include <algorithm>
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
        string s;
        cin >> s;
        if (count(s.begin(), s.end(), '0') == s.size())
        {
            cout << "0" << endl;
        }
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                flag = 2;
                cout << "2" << endl;
                break;
            }
            else if (s[i] == '1' && s[i + 1] != 1)
            {
                flag = 1;
                continue;
            }
        }
        if (flag == 1)
        {
            cout << "1" << endl;
        }
    }
}