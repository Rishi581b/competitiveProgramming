#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        cin >> len;
        string s;
        cin >> s;
        unordered_map<char, int> a;

        for (int i = 0; i < len; i++)
        {
            a[s[i]]++;
        }

        int flag = 1;
        for (int i = 0; i < len; i++)
        {
            if (a[s[i]] & 1 == 1)
            {
                flag = 0;
                cout << "no" << endl;
                break;
            }
        }
        if (flag)
        {
            cout << "yes" << endl;
        }
    }
}