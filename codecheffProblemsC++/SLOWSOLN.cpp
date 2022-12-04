#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;
        int ans = 0, minimum;

        for (int i = 0; i < maxT; i++)
        {
            minimum = min(maxN, sumN);
            ans = ans + (minimum * minimum);
            sumN = sumN - minimum;
        }
        cout << ans << endl;
    }
}