#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count1 = 0, count2 = 0;
        string s;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s == "START38")
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        cout << count1 << " " << count2 << endl;
    }
}