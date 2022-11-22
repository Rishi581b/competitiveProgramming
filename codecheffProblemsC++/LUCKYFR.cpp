#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str = to_string(n);
        vector<char> v;
        int s = floor(log10(n)) + 1;
        for (int i = 0; i < s; i++)
        {
            int a = str[i];
            v.push_back(a);
        }
        for (auto i : v)
        {
            if (i == '4')
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        cout << count << endl;
        count = 0;
    }
}
