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
        string s;
        cin >> s;
        int win, lose;
        sort(s.begin(), s.end());
        string f = "1";
        int found = s.find(f);
        if (found > s.length() - found)
        {
            cout << "LOSE" << endl;
        }
        else
        {
            cout << "WIN" << endl;
        }
    }
}