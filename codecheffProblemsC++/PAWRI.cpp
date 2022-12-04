#include <iostream>
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
        string p = "party";
        string b = "pawri";
        for (int i = 0; i < s.length(); i++)
        {
            if (s.substr(i, 5) == p)
            {
                s.replace(i, 5, b);
            }
        }
        cout << s << endl;
    }
}