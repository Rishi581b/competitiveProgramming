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
        int n, count0 = 0, count1 = 0;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        string f = "1";
        int pos = s.find(f);
        count0 = pos;
        count1 = s.size() - pos;

        if (s[0] == '0' && s[n - 1] == '0')
        {
            cout << "1" << endl;
        }
        else if (count0 == count1)
        {
            cout << s.size() << endl;
        }
        else if (count0 > count1)
        {
            cout << count1 + (count1 + 1) << endl;
        }
        else if (count0 < count1)
        {
            cout << count0 + (count0 + 1) << endl;
        }
    }
}