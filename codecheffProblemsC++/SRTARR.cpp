#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, count = 0;
        cin >> s;
        string str;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1' && str[i + 1] == '0')
            {
                count++;
            }
        }
        cout << count << endl;
    }
}