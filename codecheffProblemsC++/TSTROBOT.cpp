#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> myset;
        set<int>::iterator it;
        int len, pos;
        cin >> len >> pos;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            myset.insert(pos);
            if (s[i] == 'R')
            {
                pos++;
                myset.insert(pos);
            }

            else if (s[i] == 'L')
            {
                pos--;
                myset.insert(pos);
            }
        }
        for (it = myset.begin(); it != myset.end(); ++it)
        {
            count++;
        }
        cout << count << endl;
    }
}