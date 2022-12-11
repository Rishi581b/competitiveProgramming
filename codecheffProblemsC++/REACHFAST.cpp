#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a, count = 0;
        if (a < b)
        {

            for (int i = 0; i < 101; i++)
            {
                sum = sum + c;
                if (sum < b)
                {
                    count++;
                }
                if (sum == b)
                {
                    count++;
                    break;
                }
                if (sum > b)
                {
                    count++;
                    break;
                }
            }
        }
        else if (a == b)
        {
            count = 0;
        }
        else if (a > b)
        {
            for (int i = 100; i > 0; i--)
            {
                sum = sum - c;
                if (sum > b)
                {
                    count++;
                }
                if (sum == b)
                {
                    count++;
                    break;
                }
                if (sum < b)
                {
                    count++;
                    break;
                }
            }
        }
        cout << count << endl;
    }
}