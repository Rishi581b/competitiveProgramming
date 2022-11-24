#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int a, b;
        int sum = 0;

        cin >> n >> a >> b;
        int temp = n / 2;
        while (temp != 1)
        {

            sum = sum + a + b;
            temp = temp / 2;
        }
        cout << sum + a << endl;
    }
}