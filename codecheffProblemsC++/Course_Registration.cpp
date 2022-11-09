#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3], sum = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sum = arr[0] + arr[2];
        if (sum <= arr[1])
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}