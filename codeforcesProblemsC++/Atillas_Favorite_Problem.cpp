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
        string s, temp = "abcdefghijklmnopqrstuvwxyz";
        cin >> s;
        sort(s.begin(), s.end());
        char t = s[n - 1];
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] == t)
            {
                cout << i + 1 << "\n";
                break;
            }
            else
            {
                continue;
            }
        }
    }
}