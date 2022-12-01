#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, flag = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count = 0;
            }
            else
            {
                count++;
                if (count == 4)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}