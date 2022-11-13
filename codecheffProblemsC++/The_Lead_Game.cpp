#include <iostream>
using namespace std;
int main()
{
    int n, leadp = 0, cum1 = 0, cum2 = 0;
    int max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, lead = 0;
        cin >> a >> b;
        cum1 += a;
        cum2 += b;
        if (cum1 > cum2)
        {
            lead = cum1 - cum2;
            if (lead > max)
            {
                max = lead;
                leadp = 1;
            }
        }
        else
        {
            lead = cum2 - cum1;
            if (lead > max)
            {
                max = lead;
                leadp = 2;
            }
        }
    }
    cout << leadp << " " << max;
    return 0;
}
