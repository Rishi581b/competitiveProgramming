#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s << "\n";
    }
}