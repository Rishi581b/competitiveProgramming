#include <iostream>
#include <cctype>
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
        int sum = 0;
        for (auto x : s)
        {
            if (isdigit(x))
            {
                sum = sum + x - '0';
            }
        }
        cout << sum << endl;
    }
}