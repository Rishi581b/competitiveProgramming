#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, c, a, count = 0, sum = 0;
        cin >> n >> x >> c;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v1.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            if (x - v1[i] > c)
            {
                count++;
                v1[i] = x;
            }
            else
            {
                v1[i] = v1[i];
            }
            sum = sum + v1[i];
        }
        cout << sum - c * count << "\n";
    }
}