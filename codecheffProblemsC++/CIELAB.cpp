#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b, temp;
    cin >> a >> b;
    int sub = a - b;
    vector<int> v;
    while (sub > 0)
    {
        temp = sub % 10;
        v.push_back(temp);
        sub = sub / 10;
    }
    int s = v.size() - 1;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[s] == 1)
        {
            v[s] = 1 + 1;
        }
        else if (v[s] > 1 && v[s] <= 9)
        {
            v[s] = v[s] - 1;
        }
        cout << v[i];
    }
}