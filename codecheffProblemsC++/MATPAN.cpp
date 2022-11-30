#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int temp;
        unordered_map<char, int> m;
        string s;
        vector<char> v = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        for (int i = 0; i < 26; i++)
        {
            cin >> temp;
            m[v[i]] = temp;
        }
        cin >> s;
        int n;
        n = s.length();
        int sum = 0;
        unordered_map<char, int> ms;
        for (int i = 0; i < n; i++)
        {
            if (ms[s[i]])
                continue;
            ms[s[i]] = 1;
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (ms[v[i]] == 1)
            {
                continue;
            }
            else
            {
                sum += m[v[i]];
            }
        }
        cout << sum << endl;
    }
    return 0;
}
