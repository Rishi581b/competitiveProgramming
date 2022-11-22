#include <iostream>

#include <list>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int count = 0;
        cin >> s;
        list<int> in;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {

                in.push_back(s[i]);
                count++;
                if (count >= 3)
                {
                    break;
                }
            }
            else
            {
                in.clear();
                count = 0;
            }
        }
        if (count >= 3)
        {
            cout << "happy" << endl;
        }
        else
        {
            cout << "sad" << endl;
        }
    }
}