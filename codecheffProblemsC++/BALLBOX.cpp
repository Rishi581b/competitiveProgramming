#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum = 0;
        cin >> n >> k;
        int temp = k;
        for (int i = 0; i < k; i++)
        {
            sum = (temp - 1) + sum;
            temp--;
        }
        if (n == 1 && k == 1)
        {
            cout << "yes" << endl;
        }
        else if (n == k)
        {
            cout << "no" << endl;
        }
        else if (n >= k + sum)
        {
            cout << "yes" << endl;
        }
        else if (n < k)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}