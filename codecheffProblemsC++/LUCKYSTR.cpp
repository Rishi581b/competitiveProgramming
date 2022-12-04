#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    string lucky, s;
    int n, k;
    cin >> n >> k;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin >> lucky;
        v.push_back(lucky);
    }

    for (int i = 0; i < k; i++)
    {
        cin >> s;
        int flag = 0;
        for (int j = 0; j < v.size(); j++)
        {
            int d = s.find(v[j]);
            if (d >= 0)
            {
                flag = 1;
                cout << "Good" << endl;
                break;
            }
            else if (s.size() >= 47)
            {
                flag = 3;
                cout << "Good" << endl;
                break;
            }
            else
            {
                flag = 2;
                continue;
            }
        }
        if (flag == 2)
        {
            cout << "Bad" << endl;
        }
    }
}