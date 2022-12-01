#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, flag = 0, flag2 = 0, flag4 = 0;
        cin >> l;
        string s;
        cin >> s;
        vector<char> v;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'H')
            {
                v.push_back('H');
            }
            else if (s[i] == 'T')
            {
                v.push_back('T');
            }
            else
            {
                continue;
            }
        }
        int count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '.')
            {
                count++;
                if (count == l)
                {
                    flag2 = 1;
                    break;
                }
            }
            else
            {
                break;
            }
        }

        if (v.size() % 2 == 0)
        {
            flag4 = 1;
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (i % 2 == 0 && v[i] == 'H' && flag4 == 1)
            {
                flag = 1;
            }
            else if (i % 2 != 0 && v[i] == 'T' && flag4 == 1)
            {
                flag = 1;
            }
            else if (i % 2 == 0 && v[i] == 'T')
            {
                flag = 0;
                break;
            }
            else if (i % 2 != 0 && v[i] == 'H')
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "Valid" << endl;
        }
        else if (flag == 0 && flag2 == 0)
        {
            cout << "Invalid" << endl;
        }
        else if (flag2 == 1 && flag == 0)
        {
            cout << "Valid" << endl;
        }
    }
}