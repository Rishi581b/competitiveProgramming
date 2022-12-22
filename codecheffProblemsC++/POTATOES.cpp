#include <iostream>
using namespace std;
int isprime(int sum)
{
    for (int i = 2; i * i <= sum; i++)
    {
        if (sum % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, sum;
        cin >> a >> b;
        sum = a + b + 1;
        while (isprime(sum) != true)
        {
            sum++;
        }
        cout << sum - (a + b) << "\n";
    }
}