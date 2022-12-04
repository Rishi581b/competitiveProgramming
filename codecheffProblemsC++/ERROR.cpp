#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.substr(i, 3) == "101" || s.substr(i, 3) == "010")
            {
                flag = 1;
                break;
            }
            else
            {
                flag = 0;
                continue;
            }
        }
        if (flag == 1)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
}