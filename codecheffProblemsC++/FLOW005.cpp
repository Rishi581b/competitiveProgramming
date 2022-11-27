#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[6] = {1, 2, 5, 10, 50, 100};
        int n, sum = 0, count = 0;
        cin >> n;
        for (int i = 5; i >= 0; i--)
        {
            while (n > sum)
            {
                sum = sum + arr[i];
                count++;
            }
            if (sum > n)
            {
                sum = sum - arr[i];
                count--;
            }
        }
        cout << count << endl;
    }
}